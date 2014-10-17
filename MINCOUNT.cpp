#include<stdio.h>

using namespace std;

int main()
{
    unsigned long long int t,h,ans,a,b;
    scanf("%llu",&t);
    while(t--)
    {
        scanf("%llu",&h);
        ans=(h*(h+1))/6;
        printf("%llu\n",ans);
    }
    return 0;
}
