#include<stdio.h>
#include<algorithm>

using namespace std;
int a[2005][20005];
int b[2005];
int c[2005];

int main()
{
    int t,d,e,f,i,j,ans;
    scanf("%d",&t);
    while(t--)
    {
        e=0;ans=0;
        while(1)
        {
            scanf("%d",&d);
            if(d==0)
            break;
            b[e]=d;
            e++;
        }
        while(1)
        {
            f=0;
            scanf("%d",&d);

            if(d==0)
            break;

            while(d!=0)
            {
                c[f]=d;
                f++;
                scanf("%d",&d);
            }
            for(i=0;i<=e;i++)
            {
                for(j=0;j<=f;j++)
                {
                    if((i==0)||(j==0))
                    a[i][j]=0;
                    else if(b[i-1]==c[j-1])
                    a[i][j]=1+a[i-1][j-1];
                    else
                    a[i][j]=max(a[i-1][j],a[i][j-1]);
                }
            }

            if(a[e][f]>ans)
            ans=a[e][f];

        }

        printf("%d\n",ans);

    }



    return 0;
}
