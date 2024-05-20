#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n, k;
   cin>>n>>k;

   vector<int> a(n), b(n);

   for (int i =0; i<n; i++) cin>>a[i];
   for (int i =0; i<n; i++) cin>>b[i];

   int i =1, j=1, ex = a[0] , x = b[0];


   while(k >1) 
   {
    if (i < n && a[i] >= x )
    {
     
        ex += a[i];

        x = *max_element(b.begin(), b.begin() + j );
        //cout<<x<<endl;
        
        j++;
        i++;
        k--;

    }
 
    else 
    {
        ex += x;
        k--;
    }
    //cout<<ex<<" "; 
   }
   cout<<ex<<endl;


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