#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;
int gcd(int,int);
int main()
{
    int t,a,b,a1,b1,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
		if(a > b)
			ans=a-b;
		else
			ans=b-a;
		if (a<0) a=a*(-1);
		if (b<0)
		b=b*(-1);
		ans=ans/gcd(a,b);
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
