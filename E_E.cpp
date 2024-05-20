#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt()                    \
   ios_base::sync_with_stdio(0); \
   cin.tie(0);                   \
   cout.tie(0);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)

void solve()
{
   ll n;
   cin >> n;

   string a;
   cin >> a;

   ll aa = 1, g = 1;

   for (int i = 0; i < n; i++)
   {
      if (a[i] == '0')
      {
         aa *= 2;
         aa = aa % 100003;
      }
      else
      {
         g *= 3;
         g = g % 100003;
      }
   }

   cout << (aa % 100003 + g % 100003) % 100003 << endl;
}

int main()
{
   opt();
   int t;
   cin >> t;
   while (t--)
   {
      solve();
   }
   return 0;
}