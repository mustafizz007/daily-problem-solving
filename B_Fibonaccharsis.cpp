#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (k > 30)
        {
            cout << "0" << endl;
            continue;
        }
       int ans = 0;
      //else
        //{
            for (int i = 0; i <= n; i++)
            {
                int second = n;
                int first =  i;
                bool ok = true;

                for (int j = 1; j<= k -2; j++)
                {
                    int temp = second - first;
                    second = first;
                    first = temp;

                    if (first <= second && first > -1)
                    {
                        continue;
                    }
                    else 
                    {
                        ok = false;
                        break;
                    }
                }
                if (ok) ans++;
            }         
       //}
        cout<<ans<<endl;
    }
    //credit: AlgoBot@yt
}