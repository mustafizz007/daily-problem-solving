#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
   int n; cin>>n;
   vector <int> v (n);
   for (int i =0; i<n; i++)
   {
    cin>>v[i];
   }
   sort(v.begin() , v.end());
   int q; cin>>q;
   while (q--)
   {
    int x; cin>>x;
    
    bool present = binary_search(v.begin() ,  v.end(), x);
    if (present)
    {
        vector <int>::iterator it  = lower_bound(v.begin() , v.end(), x);

        cout<<"Yes "<<distance(v.begin() , it+1)<<endl;
    }
    else if (!present)
    {
        vector <int>::iterator it  = lower_bound(v.begin() , v.end(), x);
        cout<<"No "<<distance(v.begin(), it+1)<<endl;
    }


   }
}

