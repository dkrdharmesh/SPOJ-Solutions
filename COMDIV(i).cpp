#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;
int gcd(int,int);
int main()
{
    int t,n,m,ans,i,g,z;
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        scanf("%d%d",&n,&m);
        if(n>m)
        g=gcd(n,m);
        else
        g=gcd(m,n);
        z=sqrt(g);
        for(i=1;i<=z;i++)
        {
            if(g%i==0)
            {
                ans+=2;
                if(i==g/i)
                ans--;
            }
        }
        printf("%d\n",ans);

    }
    return 0;
}
int gcd(int k,int l)
{
    if(l==0)
    return k;
    else
    return gcd(l,k%l);
}
