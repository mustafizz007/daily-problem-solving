#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define N  555
char a[N][N];

void solve()
{
  int r, c; 
  cin>>r>>c;

  //char a[r][c];

   for (int i = 1; i<=N; i++)
  {
    for (int j=1; j<=N; j++)
    {
        a[i][j] = '.';
   
    }
  }

  for (int i = 1; i<=r; i++)
  {
    for (int j=1; j<=c; j++)
    {
        cin>>a[i][j];
       // if (a[i][j] == '.')
       // {
        //    a[i][j] = 'D';
       // }
    }
  }
    for (int i = 1; i<=r; i++)
  {
    for (int j=1; j<=c; j++)
    {
        if (a[i][j] == 'S' && (a[i][j+1] == 'W' || a[i][j-1] == 'W' || a[i+1][j] == 'W' || a[i-1][j] == 'W'))
        {
            cout<<"No"<<endl;
            return;
        }
        if (a[i][j] =='S')
        {
            if(a[i][j-1] == '.') a[i][j-1] = 'D';
            if (a[i][j+1] == '.') a[i][j+1] = 'D';
            if(a[i-1][j] == '.') a[i-1][j] = 'D';
            if (a[i+1][j] == '.') a[i+1][j] = 'D';
        }

    }
  }

  cout<<"Yes"<<endl;

  for (int i = 1; i<=r; i++)
  {
    for (int j=1; j<=c; j++)
    {
        cout<<a[i][j];
      
    }
    cout<<endl;
  }

}

int main()
{
    solve();
}