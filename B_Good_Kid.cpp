#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int min =a[0];
        for (int i=0; i<n; i++)
        {
            if (a[i] <= min)
            {
                min = a[i];
                x = i;

            }
        }
        a[x] = a[x] + 1;
        int m = a[0];
        for (int i=1; i<n; i++)
        {
            m = a[i]* m;

        }
        cout<<m<<endl;
    }
}