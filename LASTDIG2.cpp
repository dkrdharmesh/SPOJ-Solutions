#include<stdio.h>
#include<string.h>
#define mod 10
using namespace std;


int main()
{
    int t,l,z,ans,temp;
    long long int b;
    scanf("%d",&t);

    while(t--)
    {
        char a[1001];
        scanf("%s%lld",&a,&b);
        temp=strlen(a);
        l=((int)a[temp-1])-48;
        ans=1;
        temp=l;
        while(b>0)
        {
          if(b%2==0)
          {
            temp=(temp*temp)%mod;
            b=b/2;
          }
          else
          {
            ans=(ans*temp)%mod;
            b--;
          }
        }
        printf("%d\n",ans);
    }
    return(0);
}
