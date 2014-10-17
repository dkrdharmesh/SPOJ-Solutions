#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
    int t,n,i,ans;
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        scanf("%d",&n);
        int a[n];int b[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        scanf("%d",&b[i]);
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            ans+=(a[i]*b[i]);
        }
        printf("%d\n",ans);


    }
    return(0);

}
