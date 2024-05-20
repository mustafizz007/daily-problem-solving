#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

void solve ()
{
   int n;
    cin >> n;

    int a[n];
    fr(i, n) cin >> a[i];

    int cnt = -1;
    int i,j;
    for ( i = 0, j = n - 1; i < j;)
    {
        if (a[i] == a[j])
        {
            // If elements at i and j are same, move i and j closer to each other
            i++;
            j--;
        }
        else
        {
            // If elements at i and j are different, break the loop
            break;
        }
    }
   cnt = min(i, n - j - 1);
    cout << cnt << endl;


}

int main ()
{
    opt();
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}