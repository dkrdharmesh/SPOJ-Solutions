#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    long long int t,a,b,c,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        ans=((a*a)-(2*b));
        printf("%lld\n",ans);
    }
    return 0;
}
