#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int t;
    long long int n,i,a,b;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%lld",&n);
        b=0;
        for(i=2;i<=sqrt(n);i++)
        {
            a=0;
            while(n%i==0)
            {
                a++;
                n=n/i;
            }
            if((a%2==1)&&(i%4==3))
            {
                printf("No\n");
                b=1;
                break;
            }
        }
        //printf("n=%lld\n",n);
        if((n>1)&&(n%4==3)&&(b==0))
        {
            printf("No\n");
            continue;
        }
        if(b==0)
        printf("Yes\n");
    }
    return(0);
}
