#include<stdio.h>

using namespace std;

long long int max2(long long int,long long int);
long long int max3(long long int,long long int,long long int);
int main()
{
    int t,h,w;
    long long int i,c,ans,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&h,&w);
        long long int a[h][w];
        long long int b[h][w];
        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                scanf("%lld",&a[i][j]);
                b[i][j]=0;
            }
        }
        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                if(i==0)
                {
                    b[i][j]=a[i][j];
                    continue;
                }
                else if(j==0)
                {
                    if(j!=w-1)
                    {
                        c=max2(b[i-1][j],b[i-1][j+1]);
                        b[i][j]=b[i][j]+(c+a[i][j]);
                    }
                    else
                    b[i][j]=b[i][j]+(b[i-1][j]+a[i][j]);
                    continue;

                }
                else if(j<(w-1))
                {
                    c=max3(b[i-1][j-1],b[i-1][j],b[i-1][j+1]);
                    b[i][j]+=(c+a[i][j]);
                    continue;
                }
                else if(j==w-1)
                {
                    c=max2(b[i-1][j-1],b[i-1][j]);
                    b[i][j]+=(c+a[i][j]);
                    continue;
                }

            }
        }
        ans=b[h-1][0];
        for(i=0;i<w;i++)
        {
            if(ans<b[h-1][i])
            ans=b[h-1][i];
        }
        printf("%lld\n",ans);
    }
    return(0);
}
long long int max2(long long int a,long long int b)
{
    if(a>b)
    return a;
    else
    return b;
}
long long int max3(long long int a,long long int b,long long int c)
{
    if((a>=b)&&(a>=c))
    return a;
    else if((b>=a)&&(b>=c))
    return b;
    else
    return c;
}
