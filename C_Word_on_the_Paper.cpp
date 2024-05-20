#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j;
    cin >> t;
    while (t--)
    {
        char a[8][8];
        string b; //= "";
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                if (a[i][j] >= 'a' && a[i][j] <= 'z')
                {
                    b = b + a[i][j];
                }
            }
        }
        /// for (i=0; i<8; i++)
        //{
        //  cout<<b[i];
        //}
        cout << b << endl;
        // b[8] = '\0';
    }
}