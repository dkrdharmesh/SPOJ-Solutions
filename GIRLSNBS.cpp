#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    //int g,b;
    double d,g,b;
    int ans;
    while(1)
    {
        scanf("%lf%lf",&g,&b);
        if((g==-1)&&(b==-1))
        return(0);
        ans=0;
        if((b==0)&&(g==0))
        printf("0\n");
        //else if(g==0)
        //printf("%d\n",b);
        //else if(b==0)
        //printf("%d\n",g);
        else if((b==g)||(b==g+1)||(g==b+1))
        printf("1\n");
        else if(g>b)
        {
            d=(g/(b+1));
            ans=ceil(d);
            printf("%d\n",ans);

        }
        else
        {

        d=(b/(g+1));
        ans=ceil(d);
        printf("%d\n",ans);
        }
    }
    return(0);
}
