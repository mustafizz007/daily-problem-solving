#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    int q; cin>>q;
    set <int> s;
    while (q--)
    {

        int n; cin>>n;
        int y; cin>>y;
        if (n==1) 
        {
            s.insert(y);
        }
        else if (n == 2)
        {
            s.erase(y);
        }
        else if (n == 3)
        {
            auto it = s.find(y);
            if (it == s.end()) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
    
}