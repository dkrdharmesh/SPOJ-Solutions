#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,m,i,j;

    scanf("%d%d",&n,&m);
    int a[n][m];
    int b[n][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    for(j=0;j<m;j++)
    {
        b[0][j]=a[0][j];
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(j==0)
            {
                if(j!=m-1)
                b[i][j]=a[i][j]+min(b[i-1][j],b[i-1][j+1]);
                else
                b[i][j]=a[i][j]+b[i-1][j];
            }
            else if(j==m-1)
            {
                if(j!=0)
                b[i][j]=a[i][j]+min(b[i-1][j],b[i-1][j-1]);
            }
            else
            {
                b[i][j]=a[i][j]+min(b[i-1][j],min(b[i-1][j-1],b[i-1][j+1]));
            }
        }
    }
    i=b[n-1][0];
    for(j=0;j<m;j++)
    {
        i=min(i,b[n-1][j]);
    }
    printf("%d\n",i);
    return 0;
}
