#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string binary(ll n) 
{ 
   
    string s = bitset<64> (n).to_string(); 
    const auto loc1 = s.find('1'); 
      
    if(loc1 != string::npos) return s.substr(loc1);    
} 

void solve ()
{
   ll n;
   cin>>n;

   string x = binary(n);
   //cout<<x<<endl;
ll on=0, zr=0;
   for (auto i: x) 
   {
    if (i == '1') on++;
   
   }
   (on % 2 == 0) ? cout<<"EVEN"<<endl : cout<<"ODD"<<endl;
   //cout<<on<<" "<<zr<<endl;
}

int main ()
{
    opt();
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}