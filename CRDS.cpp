#include<stdio.h>

using namespace std;

#define mod 1000007

int main()
{
    long long int t,n,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ans=n*(6+((n-1)*3));
        ans=ans/2;
        ans=ans-n;
        ans=ans%mod;
        printf("%lld\n",ans);
    }
    return(0);
}
