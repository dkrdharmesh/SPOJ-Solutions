#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    int t,a,b,x,y,i,c,d;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        y=a;
        x=b;
        c=min(y,x);
        for(i=2;i<=sqrt(c);i++)
        {
            while((y%i==0)&&(x%i==0))
            {
                y=y/i;
                x=x/i;
            }
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}
