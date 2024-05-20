#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n, f=0;
    cin>>n;

    for (int i =1; ; i++)
    {
        if (pow(2,i) == n) 
        {
            f =1;
            break;
        }
        if (pow(2,i) > n) 
        {
            break;
        }
        
    }
    if (f==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}