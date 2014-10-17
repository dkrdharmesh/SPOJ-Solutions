#include<stdio.h>
#include<algorithm>

using namespace std;
long long int a[100005];
long long int b[100005];

bool myfunc(long long int i,long long int j)
{
    if(i>j)
    return true;
    else
    return false;
}
int main()
{
    long long int n,i,ans;
    scanf("%lld",&n);
    while(n!=0)
    {
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);

    for(i=0;i<n;i++)
    scanf("%lld",&b[i]);

    sort(a,a+n,myfunc);
    sort(b,b+n);
    ans=0;
    for(i=0;i<n;i++)
    {
        ans+=a[i]*b[i];
    }
    printf("%lld\n",ans);
    scanf("%lld",&n);
    }
    return 0;
}
