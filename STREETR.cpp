#include<stdio.h>
#include<algorithm>

using namespace std;

int gcd(int,int);
int a[100005];
int main()
{
    int n,i,b,c,d,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,a+n);
    //printf("b=%d\n",b);
    /*if(b!=1)
    {
        c=a[n-1]-a[0];
        c/=b;
        c++;
        c-=n;
        printf("%lld\n",c);
        return 0;
    }*/
    //else
    //{
        ans=0;
        d=a[1]-a[0];
        for(i=2;i<n;i++)
        {
            d=gcd(a[i]-a[i-1],d);
        }
        i=1;
        c=a[0];
        for(int i=0;i<n-1;i++)
        {
        ans+=(((a[i+1]-a[i])/d)-1);
        }
        //if(i==n)
        //{
            printf("%d\n",ans);
        //}
        /*else
        {
            ans=a[n-1]-a[0];
            ans++;
            ans-=n;
            printf("%lld\n",ans);
            return 0;

        }*/

    return 0;
}
int gcd(int k,int l)
{
    if(l==0)
    return k;
    else
    return gcd(l,k%l);
}
