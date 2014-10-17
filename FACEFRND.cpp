#include<stdio.h>

using namespace std;

int main()
{
    int n,m,x,i,id,j,c;

    int a[10000]={0};
    c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&id);
        if(a[id]==2)
        {
            c--;
        }
        a[id]=1;
        scanf("%d",&m);
        for(j=1;j<=m;j++)
        {
            scanf("%d",&x);
            if(a[x]==0)
            {
                c++;
                a[x]=2;
            }
        }
    }
    printf("%d\n",c);
    return 0;
}
