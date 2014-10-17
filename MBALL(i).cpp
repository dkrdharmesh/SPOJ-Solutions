#include<stdio.h>


using namespace std;
long long int a[100005];
int main()
{
    long long int t,n,i;
    for(i=0;i<=100000;i++)
    a[i]=0;
    a[0]=1;
	long long int pts[]={2,3,6,7,8};

	for(i=0;i<5;i++)
		for(int p=0;p+pts[i]<=100000;p++)
			a[p+pts[i]]+=a[p];

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",a[n]);
    }
    return 0;
}
