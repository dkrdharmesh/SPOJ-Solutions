#include<stdio.h>

using namespace std;

int main()
{
    long long int t,n,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==1)
        printf("0\n");
        else if(n==2)
        printf("1\n");
        else
        {
            //printf("sdasd\n");
            ans=(n*n)/2;
            if(n%2==1)
            ans++;
            if(ans%2==1)
            printf("0\n");
            else
            printf("1\n");
        }
    }
    return 0;
}
