#include<stdio.h>
#include<algorithm>

using namespace std;
long long int a[3005];
long long int z[100005];
int main()
{
    long long int t,n,x,i,b,c,d,ans,j;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        ans=0;
        for(j=0;j<=2005;j++)
        a[j]=0;

        scanf("%lld%lld",&x,&n);
        for(j=1;j<=n;j++)
        {
            scanf("%lld",&z[j]);
        }
        for(j=1;j<=n;j++)
        {
            a[z[j]]++;
        }
        for(j=0;j<=1000;j++)
        {
            if((a[j]>0)&&(j<=x))
            {
                if((a[x-j]>0)&&(x-j>=j))
                {
                    if(x-j==j)
                    {
                        //printf("aaa %lld\n",a[j]);
                        ans+=(a[j]*(a[j]-1))/2;
                    }
                    else
                    {
                        ans+=a[j]*a[x-j];
                    }
                }
            }
        }
        printf("%lld. %lld\n",i,ans);
    }
}
