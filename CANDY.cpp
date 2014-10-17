#include<stdio.h>

using namespace std;

int main()
{
    long long int n,i,sum,ans;
    while(1)
    {
        sum=0;ans=0;
        scanf("%lld",&n);
        if(n==-1)
        return(0);
        long long int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
            //printf("sum=%lld\n",sum);
        }
        //printf("sum=%lld\n",sum);
        if(sum%n!=0)
        {
            printf("-1\n");
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(a[i]>(sum/n))
                ans+=(a[i]-(sum/n));
            }
            printf("%lld\n",ans);
        }
    }
    return(0);
}

