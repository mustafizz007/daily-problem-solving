#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

const int mx = 1e5+123;
int a[mx];
int main ()
{
    opt();

    int n, q;
    cin>>n>>q;

    for (int i =0; i<n; i++) cin>>a[i];

    while (q--)
    {
        int x;
        cin>>x;
        int l = 0, r = n-1;
int ans = -1;
        while ( l <= r)
        {
            int mid = (l + r) / 2;

            if (a[mid] == x)
            {
                ans = mid;
                r = mid -1;
            }
            if (a[mid] >= x)
            {
                r = mid - 1;
            } 
            else l = mid + 1;
        }
        cout<<ans<<endl;
    }


}