#include<stdio.h>

using namespace std;

int main()
{
    double a[600];
    double b;
    int t,i;
    a[0]=0;
    a[1]=0.5;
    for(i=2;i<=600;i++)
    {
        a[i]=a[i-1]+(1.0/(i+1));
    }

    //scanf("%d",&t);
    while(1)
    {
        scanf("%lf",&b);
        if(b==0)
        return(0);
        i=1;
        while(a[i]<b)
        i++;
        printf("%d card(s)\n",i);
    }
    return(0);
}
