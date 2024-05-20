#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, k;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][2];
        int b[n];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < 2; j++)
            {
                cin>>a[i][j];

            }
        }
        for (i = 0; i < n; i++)
        {
            //for (j = 0; j < 2; j++)
            //{
                if (a[i][0] <= 10)
                {
                    b[i] = a[i][1];
                }
                else
                {
                    b[i] = 0;
                }
          //  }
        }
        int max = b[0];
        int x = 0;
        for (i = 0; i < n; i++)
        {
            if (b[i] > max)
            {
                max = b[i];
                x = i;
            }
        }
        cout << x + 1 << endl;
    }
}