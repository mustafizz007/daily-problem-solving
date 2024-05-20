#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,k;
        cin>>n>>k;
        int a[n];
        for (i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int sum = 0;
        for (i=0; i<n; i++)
        {
            sum = sum + a[i];
        }
        int x = (sum * k) - (n*2);
        if (n%2==0) cout<<"case %d: %d"<<t<<x+2<<endl;
        else cout<<x-1<<endl;
    }
}
