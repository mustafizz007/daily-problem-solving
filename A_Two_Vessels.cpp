#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b)
        {
            while (a > b)
            {
                a -= c;
                b += c;
                cnt++;
            }
            cout << cnt << endl;
        }
        else if (b > a)
        {
            while (b > a)
            {
                b -= c;
                a += c;
                cnt++;
            }
            cout << cnt << endl;
        }
        else
            cout << 0 << endl;
    }
}