#include<stdio.h>

using namespace std;
long long int dp[70][10];
int main()
{
    long long int t,a,b,i,j,k,sum;
    scanf("%lld",&t);

    for(i=0;i<10;i++)
    dp[0][i]=1;

    for(i=1;i<=64;i++)
    {
        for(j=0;j<=9;j++)
        {
            sum=0;
            for(k=0;k<=j;k++)
            sum+=dp[i-1][k];

            dp[i][j]=sum;
        }
    }
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        printf("%lld %lld\n",a,dp[b][9]);
    }
    return 0;
}
