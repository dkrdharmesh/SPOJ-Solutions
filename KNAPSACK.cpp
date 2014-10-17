#include<stdio.h>

using namespace std;
int maxi(int,int);

int main()
{
    int s,n,i,j;
    scanf("%d%d",&s,&n);
    int v[n];
    int w[n];

    int a[n+1][s+1];
    for(i=0;i<n;i++)
    scanf("%d%d",&w[i],&v[i]);

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=s;j++)
        {
            if((i==0)||(j==0))
            a[i][j]=0;
            else if(w[i-1]<=j)
            a[i][j]=maxi(v[i-1]+a[i-1][j-w[i-1]],a[i-1][j]);
            else
            a[i][j]=a[i-1][j];
        }
    }
    printf("%d\n",a[n][s]);
}
int maxi(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
