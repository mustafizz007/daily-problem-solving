#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
    string d;
   int n;
   cin>>n;

   int a[n];
   for (int i=0; i<n; i++) cin>>a[i];

   map< char, int > m;
   for (char i = 'a'; i<='z'; i++)
   {
    m[i] = 0;
   }



   for (int i=0; i<n; i++)
   {
    if (a[i] == 0)
    {
        for (auto i : m)
        {
            if (i.second == 0)
            {
                d.push_back(i.first);
                m[i.first]++;
                break;
            }
        }
       
    }
    else 
    {
        int g = a[i];
        for (auto i: m)
        {
            if (i.second == g)
            {
                d.push_back(i.first);
                m[i.first]++;
                break;
            }
        }
    }
    
  
   }
   cout<<d<<endl;
}

int main ()
{
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}