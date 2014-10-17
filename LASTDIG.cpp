#include<stdio.h>
#define mod 10

using namespace std;

unsigned long long int poww(unsigned long long int,unsigned long long int);
int main()
{
    int t;
    unsigned long long int a,b,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        ans=poww(a,b);
        printf("%lld\n",ans%10);
    }
    return(0);
}
unsigned long long int poww(unsigned long long int m,unsigned long long int n)
{
unsigned long long int temp=m;

unsigned long long int ans=1;
while(n>0)
{
if( n%2 ==0 )
{
    temp=(temp*temp)%mod;
    n/=2 ;
}

else
{
    ans=(ans*temp)%mod;
    n-=1;
}
}
return ans;
}
