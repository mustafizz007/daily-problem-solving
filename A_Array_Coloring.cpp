#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, min,x;
    cin >> t;
    while (t--)
    {
        int n, sum1 = 0, sum2 = 0;
        cin >> n;
        int a[n];
        for ( int  i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        //for (int i = 0; i < n; i++)
       /// {
       //     min = a[i];

        //    for (int j = i + 1; j < n; j++)
         //   {
         //       if (a[j] < min)
         //       {
         //           min = a[j];
         ///           x = j;
          //      }
          //  }
          //  if (min != a[i])
          //  {
          //      a[x] = a[i];
          //      a[i] = min;
          //  }
       // }
        //for (i=0; i<n; i++) cout<<a[i]<<" ";
        //cout<<endl;
        for (int i = 0; i< ceil(n/2); i++)
        {
            sum1 = a[i] + sum1;
        }
        for (int i = ceil(n/2); i< n; i++)
        {
            sum2= sum2 + a[i];
        }
        if (sum1 %2 ==0 && sum2 %2==0 || sum1 %2 !=0 && sum2 %2 !=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       //cout<<sum1<<" "<<sum2<<endl;
    }
}