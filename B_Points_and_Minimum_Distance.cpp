#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = 2 * n;

        vector<int> a(x);

        for (int i = 0; i < x; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int l = 0;
        vector<pair<int, int>> points;

        for (int i = 0, j =x-1; i <= j; i++, j--) {
            points.push_back(make_pair(a[i], a[j]));     
        }
    
        for (int i=1; i<n; i++) 
        {
            l += abs(points[i].first - points[i-1].first) + abs(points[i].second - points[i-1].second);
        }

        cout << l << endl;

        for (auto p : points) {
            cout << p.first << " " << p.second << endl;
        }
    }
}
