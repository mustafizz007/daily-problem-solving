#include <bits/stdc++.h>
using namespace std;
using  ll = long long;


int a, b, c, d, e, f;

const int mx = 10100;
int dp[mx];

const int MOD = 1e7+7;

int fn(int n) {

    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    
    if (dp[n] != -1) return dp[n];

    return dp[n] = ( fn(n-1) % MOD + fn(n-2) % MOD+ fn(n-3) % MOD + fn(n-4) % MOD + fn(n-5) % MOD + fn(n-6) % MOD) % MOD;
}
int main() {


    int n, cases;
    cin>>cases;
    for (int caseno = 1; caseno <= cases; ++caseno) {

        memset (dp, -1, sizeof(dp));
    
        cin>>a>>b>>c>>d>>e>>f>>n;
        cout<<"Case " << caseno<< ": " << fn(n) % MOD<<endl ;
    }
    return 0;
}