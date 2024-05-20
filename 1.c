#include<stdio.h>
int main()
{
    int n,x,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(x=0;x<n;x++){
        scanf("%d",&a[x]);
    }
    int m =a[0];
    for(x=0;x<n;x++){
        if(a[x]>m){
            printf("Yes");
        }
    }
    for(x=0;x<n;x++){
        if(a[x]>m){
            a[x]=a[k];
            }
            else if (a[x]<m){
                a[x]=a[i];
                }
                else if (a[x]>m&&a[x]<m){
                    a[x]=a[j];
                }
        }
        if(a[i]>a[k]){
            a[i]=a[i]+a[j];
        }
        else if (a[i]<a[k]){
            a[j]=a[k];
            a[k]=a[j];
        }
        for (x=0;x<n;x++){
            if (a[x]>m){
                printf("Yes");}
                else printf ("no");

        }
    }

