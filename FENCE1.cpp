#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int l;
    double pi=3.141592653589;
    double r,ans;
    while(1)
    {
        scanf("%d",&l);
        if(l==0)
        return(0);
        r=l/pi;
        ans=(r*r*pi)/2;
        printf("%0.2lf\n",ans);
    }
    return(0);
}
