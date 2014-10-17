#include<stdio.h>

using namespace std;
int a[205][205];
int main()
{
    int t,n,i,j,b,c,temp,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

        b=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                temp=0;
                for(k=0;k<n;k++)
                {
                    if((k==i)||(k==j))
                    continue;
                    if(a[i][j]==a[i][k]+a[k][j])
                    temp=1;
                }
                if(temp==0)
                printf("%d %d\n",i+1,j+1);
            }
        }
    }
    return 0;
}
