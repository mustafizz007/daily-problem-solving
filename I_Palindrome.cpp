#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f =1;
    string a;
    cin>>a;
    int n = a.length();
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        //for (int j = n-1; j>= n/2; j--)
        //{
            if (a[i] != a[j])
            {
                 f = 0;
                 break;
            }
        //}
    }
    if (f ==0 ) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    //cout<<n;
}