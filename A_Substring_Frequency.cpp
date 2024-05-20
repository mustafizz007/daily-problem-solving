#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> return_lps_table(string pat)
{
    
    vector <int> lps (pat.length());

    int  i=0, j;

    for (j=1; j<pat.length();)
    {
        if (pat[i] == pat[j])
        {
            lps[j] = i+1;
            i++;
            j++;
        }
        else
        {
            if (i != 0)
            {
                i = lps[i-1];
            }
            else 
            {
                lps[j] = 0;
                j++;
            }
        }
    }
    return lps;
}
int kmp (string txt, string pat)
{
    vector <int> lps = return_lps_table(pat);

    int i = 0 , j = 0 ,cnt = 0;

    int n = txt.length();
    int m = pat.length();

    while (i < n)
    {
        if (txt [i] == pat[j])
        {
            i++;
            j++;
        }
        else  //(text [i] != pattern[j])
        {
             
            if ( j != 0)  j = lps[j-1];
            else i++;
        
        } 
        if (j == m)
        {
            j = lps [j-1];
            cnt++;
        }
      
    }
    return cnt;
}
int main ()
{
    int t; cin>>t;
    cin.ignore();
    //while (t--)
    for (int k = 1; k<=t; k++)
    {
        string txt, pat;
        getline(cin, txt);
        getline(cin, pat);
        cout<<"Case "<<k<<": "<<kmp(txt, pat)<<endl;
       
    }
}