#include<stdio.h>
#include<limits.h>
long long int a[501][10001];
using namespace std;
long long int mini(long long int,long long int);
int main()
{
    long long int t,s,s1,n,i,j;
    scanf("%lld",&t);
    long long int c[500];
    long long int w[500];
    //long long int a[501][10001];
    //int b[501][10001];
    while(t--)
    {
        scanf("%lld%lld",&s,&s1);
        s=s1-s;
        scanf("%lld",&n);
        //int c[n];
        //int w[n];
        for(i=0;i<n;i++)
        scanf("%lld%lld",&c[i],&w[i]);
        //int a[n+1][s+1];
        //int b[n+1][s+1];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=s;j++)
            {
                if(j==0)
                {
                    a[i][j]=0;
                }
                else if(i==0)
                a[i][j]=INT_MAX;
                else if(w[i-1]<=j)
                {
                    a[i][j]=mini(a[i-1][j],mini(c[i-1]+a[i-1][j-w[i-1]],c[i-1]+a[i][j-w[i-1]]));
                }
                else
                {
                    a[i][j]=a[i-1][j];
                }
            }
        }
        /*for(i=0;i<=n;i++)
        {
            for(j=0;j<=s;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }*/
        if(a[n][s]==INT_MAX)
        printf("This is impossible.\n");
        else
        printf("The minimum amount of money in the piggy-bank is %lld.\n",a[n][s]);
    }
    return 0;
}
long long int mini(long long int a,long long int b)
{
    if(a<b)
    return a;
    else
    return b;
}

