#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    int t ; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int a[n];
        int f=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        map <int, int> m;
        for (int i=0; i<n; i++) m[a[i]]++;

        if (m.size() == 1) f =0;
      
        else if (m.size() >= 3) 
        {
           f =1;           
        }
        else 
        {      
            vector<int> b(2);
            int j=0;
            for (auto i: m)
            {
               b[j] = i.second; 
               j++;
            }           
            if ( abs (b[0] - b[1]) >=  2) 
            {
                  f =1; 
            }
            //for (auto i : b) cout<<i<<" ";
        }
        if (f == 1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
