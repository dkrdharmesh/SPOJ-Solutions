#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    double a,b,c,d,t;
    double y,z;
    scanf("%lf",&t);
    while(t--)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        y=(a+b+c+d)/2.0;
        z=sqrt((y-a)*(y-b)*(y-c)*(y-d));
        printf("%0.2lf\n",z);
    }
    return(0);
}
