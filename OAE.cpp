#include<stdio.h>
#include<algorithm>

using namespace std;

#define mod 314159
long long int nine[1000005];
long long int a[1000005];
long long int power(long long int,long long int);
int main()
{
    long long int n,t,i,inv,ans,r;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        r=(power(10,n)+power(8,n))%mod;
        inv=power(2,mod-2);
        ans=(r*inv)%mod;
        printf("%lld\n",ans);
    }
    return 0;
}
long long int power(long long int m ,long long int n )
{
long long int temp=m ;

long long int ans=1;
while(n>0)
{
if( n%2 ==0 )
{
    temp= (temp * temp );
    if(temp>=mod)
    temp=temp%mod;
     n/=2 ;
}

else
{
    ans=( ans * temp ) ;
    if(ans>=mod)
    ans=ans%mod;
     n-=1;
}
}
return ans;
}
