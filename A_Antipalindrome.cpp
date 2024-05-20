#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

bool is_palindrome (string a){
    for (int i =0 ; i< a.size()-1; i++)
    {
        if(a[i] != a[a.size()-1-i]){
            return false;
        }
    }
    return true;
}

void solve ()
{
   string a;  cin >> a;
map<char, int> m;
   fr(i, a.size()){
    m[a[i]]++;
   }
//    cout << m.size() <<endl;

   if (m.size() == 1){
    cout << 0 << endl;
    return;
   }

   if(is_palindrome(a)){
    cout << a.size() -1 << endl;
    return;
   }
   cout << a.size() << endl;

}

int main ()
{
    opt();
  
        solve();
 
}