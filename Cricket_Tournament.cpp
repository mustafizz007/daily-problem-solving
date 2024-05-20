#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string decimalToBinary(int n) 
{ 
    //finding the binary form of the number and  
    //converting it to string.  
    string s = bitset<64> (n).to_string(); 
      
    //Finding the first occurrence of "1" 
    //to strip off the leading zeroes. 
    const auto loc1 = s.find('1'); 
      
    if(loc1 != string::npos) 
        return s.substr(loc1); 
      
    
} 

void solve ()
{
   ll n, k;
   cin>>n>>k;
   ll x = n;
   ll cnt=0;
   while (x != 1)
   {
    ll z = x/2;
    cnt+=z;
    x-= z;
   }
  // cout<<cnt<<endl;
  (cnt >=k ) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
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