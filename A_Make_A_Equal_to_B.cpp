#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define opt()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];

    int oa = 0, ob = 0, na = 0, nb = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0) oa++;
        else  na++;
    }
    for (int i = 0; i < n; i++)
    {

        cin >> b[i];
        if (b[i] == 0) ob++;
        else nb++;
    }

bool ok = true;

    for (int i = 0; i< n; i++)
    {
        if (a[i] == b[i]) continue;
        else {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout<<0<<endl;
        return;
    }

    if (oa == ob or na == nb){

        cout<<1<<endl;
    }
    else 
    {
        //cout<<-1<<endl;

        int cnt =1, cnt2=0;

        for (int i =0; i<n; i++)
        {
            if (a[i] != b[i]) cnt2++;
        }

        sort(a, a+n);
        sort(b, b+n);

        for (int i =0; i<n; i++)
        {
            if (a[i] != b[i]) cnt++;
        }
        cout<<min (cnt,cnt2)<<endl;
    }
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