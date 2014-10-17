#include<stdio.h>
using namespace std;

int main()
{
    int t,n,i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        return(0);

        int a[n+1];
        int b[n+1];

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]=i;
            //printf("%d\n",b[i]);
        }
        //for(i=0;i<n;i++)
        //printf("%d ",b[i]);
        for(i=1;i<=n;i++)
        if(a[i]!=b[i])
        break;

        if(i==n+1)
        printf("ambiguous\n");
        else
        printf("not ambiguous\n");
    }
    return(0);

}
