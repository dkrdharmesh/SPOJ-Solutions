#include<stdio.h>

using namespace std;

int main()
{
    int n1,n2,i,j,c1,c2,ans,d1,d2;

    scanf("%d",&n1);
    if(n1==0)
    return 0;

    //scanf("%d",&n2);
    while(1)
    {
        int a[n1];
        d1=d2=0;
        c1=c2=0;
        ans=0;
        for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

        scanf("%d",&n2);
        int b[n2];
        for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

        while((d1<n1)&&(d2<n2))
        {
            if(a[d1]<b[d2])
            {
                c1+=a[d1];
                d1++;

            }
            else if(a[d1]>b[d2])
            {
                c2+=b[d2];
                d2++;

            }
            else
            {
                ans+=a[d1];
                if(c1>c2)
                {
                    ans+=c1;
                  //  printf("ans1=%d\n",ans);
                }
                else
                {
                    ans+=c2;
                  //  printf("ans2=%d\n",ans);
                }
                c1=c2=0;
                d1++;
                d2++;
            }
        }
        if(d1==n1)
        {
            while(d2!=n2)
            {
                c2+=b[d2];
                d2++;
            }
        }
        else
        {
            while(d1!=n1)
            {
                c1+=a[d1];
                d1++;
            }
        }
        if(c1>c2)
        {
            ans+=c1;
          //  printf("ans1=%d\n",ans);
        }
        else
        {
            ans+=c2;
          //  printf("ans2=%d\n",ans);
        }
        printf("%d\n",ans);

        scanf("%d",&n1);
        if(n1==0)
        return 0;

    }
    return 0;
}
