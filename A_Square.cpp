#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   vector <pair<int, int> > v(4);
   for(int i=0; i<4; i++)
   {
    cin>>v[i].first>>v[i].second;
   }
   int a, b;
   for (int i=0; i<4; i++)
   {
    for (int j=i+1; j <4; j++)
    {
        if (v[i].second == v[j].second)
        {
            a = v[i].first;
            b = v[j].first;
        }
    }
   }

   cout<<abs(a-b) * abs(a-b)<<endl;
}

int main ()
{
    int t; 
    cin>>t;
    
    while (t--)
    {
        solve();
    }
    
}