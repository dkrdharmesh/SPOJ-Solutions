#include<stdio.h>

using namespace std;

long long int sum(long long int);
long long int a[10000000];
int main()
{
    //int a[100000000];
    long long int i,b,c,d,n;
    a[0]=0;
    a[1]=1;
    a[2]=2;
    a[3]=3;

    for(i=4;i<(10000000-1);i++)
    {
        b=a[i/2];
        c=a[i/3];
        d=a[i/4];
        if((b+c+d)>i)
        a[i]=b+c+d;
        else
        a[i]=i;
    }

    //int t;
    //scanf("%d",&t);

    while(scanf("%lld",&n)!=EOF)
    {
        //scanf("%d",&n);
        if(n<(10000000-1))
        printf("%lld\n",a[n]);
        else
        {
            b=sum(n);
            printf("%lld\n",b);
        }

    }
    return(0);
}

long long int sum(long long int n)
{
    long long int x,y,z;

    if((n/2)<(10000000-1))
    {
        y=a[n/2]+a[n/3]+a[n/4];
        return(y);
    }
    else
    {
      y=sum(n/2)+sum(n/3)+sum(n/4);
      if(y>n)
      return(y);
      else
      return(n);
    }
}
