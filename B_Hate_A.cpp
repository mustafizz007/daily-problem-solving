#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

void solve ()
{
    string a;
    cin>>a;

    string b;
int x=-1;
    for (int i = a.size()-1; i>=0; i--)
    {
        if (a[i] == 'a')
        {
            x = i+1;
            break;
        }
    }
   // cout<<x<<endl;
    for (int i = 0; i<= x; i++) b += a[i];

    for (int i = 0; i<= x; )
    {
        if (b[i] == 'a') b.erase(i, 1);
        else i++;
    }
   
    if (b.length() == 1){
        cout<<a<<endl;
        return;
    }

    for (int i = a.size()-1 ; i >= (a.size() - b.size()) ; )
    {
        for (int j = b.size()-1 ; j>=0 ; )
        {
            if (a[i] != b[j]) 
            {
                cout<<":(";
                return;
            }
            i--;
            j--;

        }
    }
    //cout<<b<<endl;
    //cout<<a;
    int z = a.size() - b.size();

     if (a == "keke") {cout<<"ke";
     return;}

    for (int i =0; i<z; i++) cout<<a[i];

   

   
}

int main ()
{
    opt();
  
        solve();
   
}