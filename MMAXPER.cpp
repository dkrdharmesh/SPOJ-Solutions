#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    long long int n,i,c,d,e,f;
    scanf("%lld",&n);

    int a[n][2];
    for(i=0;i<n;i++)
    scanf("%lld%lld",&a[i][0],&a[i][1]);

    int dp[n][2];
    dp[0][0]=a[0][1]+a[0][0];
    dp[0][1]=a[0][0]+a[0][1];

    for(i=1;i<n;i++)
    {
        c=dp[i-1][0]-a[i-1][1];
        d=abs(a[i][1]-a[i-1][1]);
        c=c+d;
        c=c+(a[i][0]+a[i][1]);

        e=dp[i-1][1]-a[i-1][0];
        f=abs(a[i][1]-a[i-1][0]);
        e=e+f;
        e=e+(a[i][1]+a[i][0]);

        dp[i][0]=max(c,e);

        c=dp[i-1][0]-a[i-1][1];
        d=abs(a[i][0]-a[i-1][1]);
        c=c+d;
        c=c+(a[i][0]+a[i][1]);

        e=dp[i-1][1]-a[i-1][0];
        f=abs((a[i][0]-a[i-1][0]));
        e=e+f;
        e=e+(a[i][1]+a[i][0]);

        dp[i][1]=max(c,e);
    }
    dp[n-1][0]-=a[n-1][1];
    dp[n-1][1]-=a[n-1][0];
    c=max(dp[n-1][0],dp[n-1][1]);
    printf("%lld\n",c);




    return 0;
}
