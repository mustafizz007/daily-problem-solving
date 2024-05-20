#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve ()
{
   int n,k;
   cin>>n>>k;

   vector<int> fact;

   for (int i =2; i<= sqrt(n); i++)
   {
    if (n % i == 0)
    {
        fact.push_back(i);
    }
   }
   for (auto i : fact) cout<<i<<" ";
   cout<<endl;
}

int main ()
{
    
        solve();
    
}