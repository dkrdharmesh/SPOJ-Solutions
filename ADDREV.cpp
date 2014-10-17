#include<stdio.h>

using namespace std;

int main()
{
    long long int t,a,b,a1,b1,c,d,e;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        a1=0;
        b1=0;

        while(a%10==0)
        a=a/10;
        while(b%10==0)
        b=b/10;

        while(a>0)
        {
           a1=(a1*10)+(a%10);
           a=a/10;
        }
        while(b>0)
        {
            b1=(b1*10)+(b%10);
            b=b/10;
        }
        //printf("sdasd %lld %lld\n",a,b);

        d=a1+b1;
        //printf("sdasd %lld\n",d);
        while(d%10==0)
        d=d/10;
        //printf("sdasd %lld\n\n",d);
        c=0;
        while(d>0)
        {
            c=(c*10)+(d%10);
            d=d/10;
        }
        //printf("sdasd\n");
        printf("%lld\n",c);
    }
    return(0);
}
