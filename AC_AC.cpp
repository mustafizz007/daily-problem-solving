#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long int len = s.length();        /* Max operations needed in worst case */        long int operations = len-1;        /* To maintain frequency */        long int count[26]={0};
        for(long int i=0;i<len;i++){
            count[s[i]-'A']++;
        }        /* Why sort? Explained in comment below*/        sort(count,count+26); /* Consider that the ouput string can either have all 26 character or just a single character */        for(int i=26;i>=1;i--){     /* Consider a string having i distinct character only if it satisfies below criteria */            if(len%i==0){
                long int temp=0;
                long int frequency = len/i;                /* Considering that each character must appear frequency times, subtracting from initial count to make frequency same*/                for(int j=25;j>=26-i;j--){
                    temp+= abs(frequency-count[j]);
                }
                /* Final output string must have only i characters, rest of character count must be zero, reason why we sorted the count array initially */
                for(int j=25-i;j>=0;j--){
                    if(count[j]!=0){
                        temp+= count[j];
                    }
                }
                /* Dividing by 2 because changing a to e (example only) will increase count of e and decrease count of a at same time */
                temp/=2;
                if(operations>temp){
                    operations = temp;
                }
            }
        }
        cout<<operations<<"\n";
    }   
    return 0;
}