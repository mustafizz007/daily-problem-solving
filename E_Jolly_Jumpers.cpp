#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, i =0;
    vector<int> a(3000), b(3000);
   
    while (cin)
    {
       
      cin>>n;
        while ( i < n)
        {
            int x;
             cin>>x;
            a.push_back(x);
            i++;
        }
  

    
        for (int i = 0; i < a.size(); i++)
        {
            int d = abs(a[i] - a[i + 1]);
            b[i] = d;
        }
        for (int i = 0; i < b.size(); i++)
        {
            if (abs(b[i] - b[i + 1]) != 1)
            {
                cout << "Not jolly" << endl;
                return;
            }
        }
        cout << "Jolly" << endl;
     
    }
}

int main()
{

    solve();
}