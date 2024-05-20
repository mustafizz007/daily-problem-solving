#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n;
   cin>>n;
   vector<int> a(n);

   for (int i = 0; i< n; i++) cin>>a[i];

    auto mx = max_element(a.begin(), a.end());  
    int y = distance(a.begin(), mx);    
    
    for (int i =1; i<y; i++)
    {
        if (a[i-1] > a[i])
        {
            cout<<"NO"<<endl;
            return;
        } 
    }
    for (int i = y+1; i<n; i++)
    {
        if (a[i-1] < a[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
  
}

int main ()
{
    
        solve();
 
}