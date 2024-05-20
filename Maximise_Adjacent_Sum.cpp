#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];

   sort(a.begin() , a.end());

   sort(a.begin() +1, a.end(), greater<int>());

   int cnt =0; 
   for (int i=1; i<=n-1; i++) 
   {
    cnt += a[i] + a[i-1];
   }
   cout<<cnt<<endl;
    

  

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
