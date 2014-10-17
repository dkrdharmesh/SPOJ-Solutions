#include<stdio.h>

using namespace std;

int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(b==a)
        {
            if((b==0)&&(a==0))
            printf("0\n");
            else if(a%2==0)
            printf("%d\n",(2*a));
            else
            printf("%d\n",(2*a)-1);
        }
        else if(b==(a-2))
        {
            if(a%2==0)
            printf("%d\n",a+b);
            else
            printf("%d\n",(a+b)-1);
        }
        else
        printf("No Number\n");
    }
    return(0);
}
