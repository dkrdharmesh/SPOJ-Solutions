#include<stdio.h>

using namespace std;

int main()
{
    int n,ans;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        return 0;
        ans=n*(n+1)*((2*n)+1);
        ans=ans/6;
        printf("%d\n",ans);
    }
    return(0);
}
