#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    int q; cin>>q;
    map<string,int> m;
    while (q--)
    {
        int x; cin>>x;
        string y; 
    
        if (x==1)
        {
            int z; 
            cin>>y;
            cin>>z;
            auto it = m.find(y);
            if (it != m.end() )
            {
                it ->second +=z;
            }
            else m.insert(make_pair(y,z));
         
        }
        else if (x == 2)
        {
            cin>>y;
            m.erase(y);
        }
        else
        {
            cin>>y;
            auto it = m.find(y);
            if (it == m.end()) cout<<"0"<<endl;
            else cout<<it->second<<endl;

        }

    
    }
}