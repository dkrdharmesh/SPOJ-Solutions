#include<stdio.h>

using namespace std;
long long int a[1005];
int main()
{
    long long int n,c,j,k,i;
    long long int y,z,ans;
    scanf("%lld",&n);
    c=0;
   // printf("llllll\n");
    while(n!=-1)
    {
        c++;
        for(i=n;i>=0;i--)
        {
        //    printf("inside with i=%llu\n",i);
            scanf("%lld",&a[i]);
        }
        //printf("dfsdf\n");
        scanf("%lld",&k);
        printf("Case %lld:\n",c);
        for(j=1;j<=k;j++)
        {
            scanf("%lld",&z);
            ans=a[0];
            y=z;
            for(i=1;i<=n;i++)
            {
                ans+=(a[i]*y);
                y=y*z;
            }
            printf("%lld\n",ans);
        }
        scanf("%lld",&n);
    }
    return 0;
}
