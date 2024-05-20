#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool check (string a)
{
    for (int i=0; i< a.size() / 2; i++)
    {
        if (a[i] != a[(a.size() -1 ) -i] )
        {
            return true;
        }
    }
    return false;
}
void solve ()
{
   int n; cin>>n;
   while (n--)
   {
    string a; cin>>a;
    sort(a.begin(), a.end());
    if (check(a))
    {
        cout<<a<<endl;

    }
    else cout<<-1<<endl;
   }
}

int main ()
{
        solve();
    
}