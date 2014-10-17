#include<stdio.h>

using namespace std;

int main()
{
    long long int t,n,i;
    scanf("%lld",&t);
    unsigned long long int sum;
    while(t--)
    {
        sum=0;
        printf("\n");
        scanf("%lld",&n);
       long long int a[n];
       for(i=0;i<n;i++)
       {
           scanf("%lld",&a[i]);
           sum+=a[i];
           if(sum>n)
           sum=sum%n;
       }
       if(sum==0)
       printf("YES\n");
       else
       printf("NO\n");

    }
    return(0);
}
