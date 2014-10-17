//USE of disjoint sets
#include<stdio.h>

using namespace std;
int find(int [],int);
int main()
{
    int n,m,c,d,i,t,y,z,x;
    scanf("%d%d",&n,&m);
    t=0;
    int a[n+1];
    for(i=1;i<=n;i++)
    a[i]=-1;
    for(i=1;i<=m;i++)
    {
        scanf("%d%d",&c,&d);
        x=find(a,c);
        y=find(a,d);
        if((x==c)&&(y==d))
        {
            a[c]=d;
        }
        else if(x!=y)
        a[x]=y;
        else
        t=1;
    }
    if(t==0)
    printf("YES\n");
    else
    printf("NO\n");
    return(0);
}
int find(int a[],int c)
{
    if(a[c]==-1)
    return(c);
    else
    return(find(a,a[c]));
}
