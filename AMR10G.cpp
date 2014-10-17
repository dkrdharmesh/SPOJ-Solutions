#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    int t,k,n,ans,i;
    int a[20005];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
        sort(a+1,a+n+1);
        ans=1000000001;
        if(k==1)
        {
            printf("0\n");
            continue;
        }
        for(i=k;i<=n;i++)
        {
            if((a[i]-a[i+1-k])<=ans)
            ans=(a[i]-a[i+1-k]);
        }
        printf("%d\n",ans);
    }
    return(0);
}
