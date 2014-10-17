#include<stdio.h>
#include<algorithm>
using namespace std;
long long int a[10005];
long long int b[10005];
long long int dp[10005][2];
long long int dp1[10005][2];
int main()
{
    //long long int x=(long long int)-10000000000;
    long long int t,n,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);

        for(i=0;i<n;i++)
        scanf("%lld",&b[i]);
        //for(i=;i<n;i++)
        dp[0][0]=a[0];
        dp[0][1]=-b[0];
        if(n>1)
        {
            dp[1][0]=a[0]-b[1];
            dp[1][1]=a[0]-b[1];
        }
        for(i=2;i<n;i++)
        {
                if(i!=n-1)
                dp[i][0]=dp[i-1][1]+a[i];
                else
                dp[i][0]=max(dp[i-1][0],dp[i-1][1])-b[i];
                dp[i][1]=max(dp[i-1][0],dp[i-1][1])-b[i];
        }
        dp1[0][0]=-b[0];
        dp1[0][1]=-b[0];
        for(i=1;i<n;i++)
        {
                dp1[i][0]=dp1[i-1][1]+a[i];
                dp1[i][1]=max(dp1[i-1][0],dp1[i-1][1])-b[i];
        }
        long long int y=max(dp[n-1][0],dp[n-1][1]);
        long long int z=max(dp1[n-1][0],dp1[n-1][1]);
        printf("%lld\n",max(y,z));
    }
    return 0;
}
