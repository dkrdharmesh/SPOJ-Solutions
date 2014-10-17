//TOPOLOGICAL SORT

#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,m,i,t,k,z,j,y;
    scanf("%d%d",&n,&m);
    int a[n+1][n+1];
    int indegree[105]={0};
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    a[i][j]=0;

    for(i=1;i<=m;i++)
    {
        scanf("%d%d",&t,&k);
        indegree[t]+=k;
        for(j=1;j<=k;j++)
        {
            scanf("%d",&z);
            a[z][t]=1;
        }
    }
    int q[105];
    int front,back;
    front=back=-1;
    for(i=1;i<=n;i++)
    {
        if(indegree[i]==0)
        {
            back++;
            q[back]=i;
        }
    }
    sort(q,q+back+1);
    while(front<back)
    {
        front++;
        y=q[front];
        printf("%d ",y);
        for(i=1;i<=n;i++)
        {
            if(a[y][i]==1)
            {
                indegree[i]--;
                if(indegree[i]==0)
                {
                    back++;
                    q[back]=i;
                }
            }
        }
        sort(q+front+1,q+back+1);
    }
    return 0;
}
