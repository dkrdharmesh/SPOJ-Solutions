#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    long long int t,r,i;
    scanf("%lld",&t);
    double a;
    for(i=1;i<=t;i++)
    {
        a=0;
        scanf("%lld",&r);
        a=4*r*r;
        a+=0.25;
        printf("Case %lld: %0.2lf\n",i,a);
    }
    return(0);
}
