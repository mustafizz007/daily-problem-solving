#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    int cnt = 0,cnt2=0;
   int n, s; cin>>n>>s;
   for (int i=n; i>0; i--)
   {
    if (s / i != 0)
    {
        cnt = s/i; 
        cnt2 += cnt;
        s =s - i*cnt;  
        //cout<<i<<" "<<s<<endl;
    }

   }
   cout<<cnt2<<endl;
}

int main ()
{
    solve();
}