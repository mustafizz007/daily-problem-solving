#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    string a;
    cin >> a;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            c++;
        }
    }
    cout << c << endl;
}