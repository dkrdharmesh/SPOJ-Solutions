#include<stdio.h>

using namespace std;

int main()
{
    long long int t,c,b,i;
    long long int a[100000];
    c=0;
    a[c]=1;
    c++;
    while(1)
    {
        if((a[c-1]+(6*c))<=1000000000)
        {
            a[c]=(a[c-1]+(6*c));
            c++;
        }
        else
        break;
    }
    while(1)
    {
        scanf("%lld",&t);
        if(t==-1)
        return(0);
        b=0;
        for(i=0;i<c;i++)
        {
            if(t==a[i])
            {
                printf("Y\n");
                break;
            }
            else if(t<a[i])
            {
                printf("N\n");
                break;
            }
        }
        if(i==c)
        printf("N\n");
    }
    return(0);
}
