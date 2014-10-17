#include<stdio.h>
#include<string.h>

using namespace std;
#define mod 1000000007
int main()
{
    int t,i,n;
    scanf("%d",&t);
    char s[100005];
    long long int a[100005];
    int lo[300];

    while(t--)
    {
        scanf("%s",&s);
        n=strlen(s);
    for(i=0;i<280;i++)
    lo[i]=-1;
    a[0]=2;
    lo[int(s[0])]=0;
    for(i=1;i<n;i++)
    {
        if(lo[int(s[i])]==-1)
        {
            a[i]=(a[i-1]*2)%mod;
            lo[int(s[i])]=i;
        }
        else
        {
            a[i]=(a[i-1]*2)%mod;
            if(lo[int(s[i])]==0)
            {
                //printf("i=%d\n",i);
                a[i]-=1;
            }
            else
            {
                a[i]-=a[lo[int(s[i])]-1];
            }
            a[i]=((a[i]%mod)+mod)%mod;
            lo[int(s[i])]=i;
        }
    }
    //printf("%lld %lld %lld",a[0],a[1],a[2]);
     printf("%lld\n",a[n-1]);
    }


    return 0;
}
