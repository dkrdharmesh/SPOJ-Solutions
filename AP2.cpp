#include<stdio.h>

using namespace std;

int main()
{
    long long int t,x,y,z,i,d,a,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&x,&y,&z);
        d=((y-x)*(x+y))/((2*z)-(5*(x+y)));
        a=x-(2*d);
        if(d!=0)
        {
            n=(y-a)/d;
            n+=3;
        }
        else
        n=z/a;
        //n+=3;
        printf("%lld\n",n);

        for(i=1;i<=n;i++)
        {
            printf("%lld ",a);
            a=a+d;
        }
        printf("\n");
    }
    return(0);

}
