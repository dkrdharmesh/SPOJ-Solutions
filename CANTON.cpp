#include<stdio.h>

using namespace std;

int main()
{
    int t,a,b,c,d,e,a1;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&a);
        a1=a;
        printf("TERM %d IS ",a);
        b=0;
        while(1)
        {
            if((a-(b+1))>=0)
            {
                b++;
                a=a-b;

            }
            else
            break;
        }
        //printf("aa%d ",a);
        if(a==0)
        {
            if(b%2==0)
            {
                printf("%d",b);
                printf("/1\n");
            }
            else
            {
                printf("1/");
                printf("%d\n",b);
            }
        }
        else
        {
            if(b%2==1)
            {
                c=1;
                d=b+1;
                c=c+(a-1);
                d=d-(a-1);
                printf("%d/%d\n",c,d);
            }
            else
            {
                c=(b+1);
                d=1;
                c=c-(a-1);
                d=d+(a-1);
                printf("%d/%d\n",c,d);
            }
        }
    }
    return(0);
}
