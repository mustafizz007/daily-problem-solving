#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n][n];

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                cin >> a[i][j];
            }
        }

        int rowSum[n];
        int colSum[n];


        for (int i = 0; i < n; i++) 
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += a[i][j];
            }
            rowSum[i] = sum;
        }

   
        for (int j = 0; j < n; j++) 
        {
            int sum = 0;
            for (int i = 0; i < n; i++) 
            {
                sum += a[i][j];
            }
            colSum[j] = sum;
        }

        int maxr = rowSum[0];
        int x;

        for (int i=0; i<n; i++)
        {
            if (rowSum[i] > maxr)
            {
                maxr = rowSum[i];
                x = i;
            }
        }

        int maxc = colSum[0];
        int y;

        for (int i=0; i<n; i++)
        {
             if (colSum[i] > maxc)
            {
                maxr = rowSum[i];
                y = i;
            }
        }
        //cout<<x<<endl;
        //cout<<y<<endl;
        int sum =0;

        for (int j=y, i=0; i<n; i++)
        {
            sum += a[i][j];
        }
        
        for (int i =x, j = 0; j<n; j++)
        {
            sum += a[i][j]; 
        }
        cout<<sum - a[x][y]<<endl;


     
        /*for (int i = 0; i < n; i++) {
            cout << rowSum[i] << " ";
        }
        cout << endl;

    
        for (int j = 0; j < n; j++) {
            cout << colSum[j] << " ";
        }
        cout << endl;*/
    }
    
}
