#include<stdio.h>

using namespace std;

int main()
{
    int p,n,i,j;
    scanf("%d%d",&p,&n);
    while(1)
    {
        if((p==0)&&(n==0))
        return 0;

        int e[n];
        int f[n];
        int a[n+1][p+1];
        int b[n+1][p+1];
        for(i=0;i<n;i++)
        scanf("%d%d",&e[i],&f[i]);
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=p;j++)
            {
                if((i==0)||(j==0))
                {
                    a[i][j]=0;
                    b[i][j]=0;
                }
                else if(e[i-1]<=j)
                {
                    if((f[i-1]+a[i-1][j-e[i-1]])>a[i-1][j])
                    {
                        a[i][j]=(f[i-1]+a[i-1][j-e[i-1]]);
                        b[i][j]=(e[i-1]+b[i-1][j-e[i-1]]);
                    }
                    else if((f[i-1]+a[i-1][j-e[i-1]])==a[i-1][j])
                    {
                        a[i][j]=(f[i-1]+a[i-1][j-e[i-1]]);
                        if(b[i-1][j-e[i-1]]+e[i-1]<b[i-1][j])
                        b[i][j]=b[i-1][j-e[i-1]]+e[i-1];
                        else
                        b[i][j]=b[i-1][j];
                    }
                    else
                    {
                        a[i][j]=a[i-1][j];
                        b[i][j]=b[i-1][j];
                    }
                }
                else
                {
                    a[i][j]=a[i-1][j];
                    b[i][j]=b[i-1][j];
                }
            }
        }
        printf("%d %d\n",b[n][p],a[n][p]);
        scanf("%d%d",&p,&n);
    }
    return 0;

}
