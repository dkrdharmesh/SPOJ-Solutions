#include<stdio.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    unsigned long long int n,ans;
    while(t--)
    {
        scanf("%llu",&n);
        ans=((n)*(n+2)*((2*n)+1))/8;
        printf("%llu\n",ans);
    }
    return(0);
}
