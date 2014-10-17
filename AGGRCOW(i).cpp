#include<stdio.h>
#include<algorithm>

using namespace std;
int a[100001];
int c,n;

int bsearch();
int f(int);
int main()
{
    int t,i,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&c);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+n);
        z=bsearch();
        printf("%d\n",z);
    }
}
int bsearch()
{
    int start=0;
    int end=a[n-1];
    int mid;
    while(start<end)
    {
        mid=(start+end)/2;
        if(f(mid)==1)
        {
            start=mid+1;
        }
        else
        end=mid;
    }
    return start-1;
}
int f(int x)
{
    int cow=1;int lastin=a[0];int i;
    for(i=1;i<n;i++)
    {
        if(a[i]-lastin>=x)
        {
            cow++;
            if(cow==c)
            return 1;
            lastin=a[i];
        }
    }
    return(0);
}
