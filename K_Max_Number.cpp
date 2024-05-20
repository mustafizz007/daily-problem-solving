#include <bits/stdc++.h>
using namespace std;
int max;
int fun(int a[], int n, int i)
{
    if (i == n)
    {
        return INT_MIN;
    }
    int max = fun(a, n, i+1);
    if (a[i] > max)
    {
        //max = a[i];
        return a[i];
    }
    else 
    {
        return max;
    }
   
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   // max = a[0];
    int max = fun(a, n, 0);
    cout << max;
}