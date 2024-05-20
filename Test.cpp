#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a[5][7] = {};
        int day, mon, yr;
        char x, y;
        cin >> day >> x >> mon >> y >> yr;
        string s;
        cin >> s;
        int z;
        if (s == "Sun")
            z = 0;
        if (s == "Mon")
            z = 1;
        if (s == "Tue")
            z = 2;
        if (s == "Wed")
            z = 3;
        if (s == "Thu")
            z = 4;
        if (s == "Fri")
            z = 5;
        if (s == "Sat")
            z = 6;

        int monn[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int ans = day - (z + 1);
        int n = (ans % 7);
        int m = 7 - n;
        m %= 7;
        // cout<<m<<endl;
        int cnt = 1;

        if (((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0)) && mon == 2)
        {
            for (int i = 0; i < 5; i++)
            {
                if (i == 0)
                {
                    for (int j = m; j < 7; j++)
                    {

                        a[i][j] = cnt;
                        cnt++;
                        if (cnt >= 30)
                            break;
                    }
                }
                else
                {
                    for (int j = 0; j < 7; j++)
                    {
                        a[i][j] = cnt;
                        cnt++;
                        if (cnt >= 30)
                            break;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                if (i == 0)
                {
                    for (int j = m; j < 7; j++)
                    {

                        a[i][j] = cnt;
                        cnt++;
                        if (cnt >= monn[mon - 1])
                            break;
                    }
                }
                else
                {
                    for (int j = 0; j < 7; j++)
                    {
                        a[i][j] = cnt;
                        cnt++;
                        if (cnt >= monn[mon - 1])
                            break;
                    }
                }
            }
        }
        cnt--;
        // cout<<monn[mon-1]<<endl;
        if (monn[mon - 1] - cnt == 2)
        {
            a[0][0] = 30;
            a[0][1] = 31;
        }
        else if (monn[mon - 1] - cnt == 1)
        {
            a[0][0] = 30;
        }
        cout << "|---------------------------|" << endl;
        cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << endl;
        cout << "|---------------------------|" << endl;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                if (a[i][j] == 0)
                {
                    cout << "| - ";
                }
                else if (a[i][j] <= 9)
                {
                    cout << "|  " << a[i][j];
                }
                else
                {
                    cout << "| " << a[i][j];
                }
            }
            cout << "|" << endl;
            cout << "|---------------------------|";
            cout << endl;
        }
        cout << endl;
    }
}
