#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
   int n; cin>>n;
   if (n>=0) cout<<n;
   else if (n>=-10 && n>0) cout<<0; 
   else
   {
    if (n/10 > n) cout<<n/10;

    else cout<<(n/100)*10 +n%10;
  
   }
    
}