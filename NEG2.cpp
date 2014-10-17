#include<stdio.h>

using namespace std;
bool a[500];
int main()
{
    long long int n,r,q,temp;
    scanf("%lld",&n);
    if(n==1)
    {
        printf("1\n");
        return 0;
    }
    else if(n==0)
    {
        printf("0\n");
        return 0;
    }

    temp=-1;
    //n=-14;
    //q=(-n)+1;
                //temp++;
                //a[temp]=1;
                //printf("1");
                //n=q/2;
                //printf("asaas %d\n",n);
    while(n!=0)
    {
        if(n<0)
        {
            if((-n)%2==0)
            {
                temp++;
                a[temp]=0;
                //printf("0");
                n=(-n)/2;
            }
            else
            {
                q=(-n)+1;
                temp++;
                a[temp]=1;
                //printf("1");
                n=q/2;
            }
        }
        else
        {
            if(n%2==0)
            {
                temp++;
                a[temp]=0;
                //printf("0");
                n=-(n/2);
            }
            else
            {
                temp++;
                a[temp]=1;
                //printf("1");
                n=-(n/2);
            }
        }

    //    printf("n=%lld\n",n);
    }
    for(r=temp;r>=0;r--)
    printf("%d",a[r]);
    return 0;
}
