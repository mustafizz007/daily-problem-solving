#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 23102009;

int distinctLCSCount(string x, string y, int n, int m) {
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    vector<vector<int>> count(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (x[i - 1] == y[j - 1]) {
                dp[i][j] = (1 + dp[i - 1][j - 1]) % MOD;
                count[i][j] = (count[i - 1][j - 1] + 1) % MOD;
            } else {
                if (dp[i - 1][j] > dp[i][j - 1]) {
                    dp[i][j] = dp[i - 1][j];
                    count[i][j] = count[i - 1][j];
                } else if (dp[i - 1][j] < dp[i][j - 1]) {
                    dp[i][j] = dp[i][j - 1];
                    count[i][j] = count[i][j - 1];
                } else {
                    dp[i][j] = dp[i - 1][j];
                    count[i][j] = (count[i - 1][j] + count[i][j - 1]) % MOD;
                }
            }
        }
    }
    return count[n][m] % MOD;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        int n = x.length();
        int m = y.length();
        cout << distinctLCSCount(x, y, n, m) << endl;
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        vector<vector<int>> count(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (x[i - 1] == y[j - 1]) {
                    dp[i][j] = (1 + dp[i - 1][j - 1]) % MOD;
                    count[i][j] = (count[i - 1][j - 1] + 1) % MOD;
                } else {
                    if (dp[i - 1][j] > dp[i][j - 1]) {
                        dp[i][j] = dp[i - 1][j];
                        count[i][j] = count[i - 1][j];
                    } else if (dp[i - 1][j] < dp[i][j - 1]) {
                        dp[i][j] = dp[i][j - 1];
                        count[i][j] = count[i][j - 1];
                    } else {
                        dp[i][j] = dp[i - 1][j];
                        count[i][j] = (count[i - 1][j] + count[i][j - 1]) % MOD;
                    }
                }
            }
        }

        cout << count[n][m] << endl;
    }

    return 0;
}
