#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
    long long int t,n,i,j,sum,ans,brr,count;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%lld%lld",&brr,&n);
        int a[n];sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        if(sum<brr)
        {
            printf("Scenario #%lld:\n",j);
            printf("impossible\n");
        }
        else
        {
            ans=0;count=0;
            sort(a,a+n);
            for(i=n-1;i>=0;i--)
            {
                ans+=a[i];
                //printf("ans=%lld\n",ans);
                count++;
                if(ans>=brr)
                break;
            }
            printf("Scenario #%lld:\n",j);
            printf("%lld\n",count);
        }
    }
    return(0);
}
