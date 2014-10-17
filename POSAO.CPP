#include<stdio.h>

using namespace std;

int main()
{
     long long int n,k,ans,rem;
     scanf("%lld %lld",&n,&k);
     if(k>n)
	 k=n;

     ans=n*n-(k*(k+1));
     //printf("ans=%lld\n",ans);
     rem=ans%k;
     //printf("rem=%lld\n",rem);
     if(rem!=0)
	 ans=ans/k+1;
     else
	 ans=ans/k;
     //printf("ans1=%lld\n",ans);

     ans+=2*k;
     printf("%lld\n",ans);
     return 0;
}
