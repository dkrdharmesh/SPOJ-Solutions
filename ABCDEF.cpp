#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,i,j,k,ans,z1,z2,v;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    int b[1000005];
    int c[1000005];
    int b1=-1;int c1=-1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                b1++;
                b[b1]=(a[i]*a[j])+a[k];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(a[i]!=0)
                {
                    c1++;
                    c[c1]=a[i]*(a[j]+a[k]);
                }
            }
        }
    }
    sort(b,b+b1+1);
    sort(c,c+c1+1);

    /*for(i=0;i<=b1;i++)
    printf("%d ",b[i]);
    printf("\n");

    for(i=0;i<=c1;i++)
    printf("%d ",c[i]);
    printf("\n");*/

    i=0;j=0;ans=0;
    while((i<=b1)&&(j<=c1))
    {
        if(b[i]<c[j])
        i++;
        else if(c[j]<b[i])
        j++;
        else
        {
            //printf("dafa\n");
            z1=z2=0;
            v=i;
            while((b[v]==b[i])&&(v<=b1))
            {
                z1++;
                v++;
            }
            //printf("olala\n");
            v=j;
            while((c[v]==c[j])&&(v<=c1))
            {
                v++;
                z2++;
            }

            ans+=(z1*z2);

            i+=(z1);
            j+=(z2);
            //printf("i=%d j=%d\n",z1,z2);
        }
    }
    printf("%d\n",ans);
    return 0;


}
