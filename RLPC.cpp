#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;
long long int a[100005];
int main()
{
    long long int t,n,sum,i,ans,c;
    scanf("%lld",&t);
    c=1;
    while(t--)
    {
        scanf("%lld",&n);
        sum=0;ans=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);

            sum+=a[i];
            if(sum<=0)
            {
                ans+=abs(sum);
                ans++;
                sum=1;
            }
        }
        if(ans==0)
        ans++;
        printf("Scenario #%lld: %lld\n",c,ans);
        c++;

    }
    return 0;
}
