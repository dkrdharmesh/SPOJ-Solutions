#include<stdio.h>
#include<math.h>

using namespace std;
long int a[1000009];
int main()
{
    long int t,n,k,i,ans1,n1;
    double ans;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        k=-1;
        n1=n;
        if(n%2==0)
        {
            k++;
            a[k]=2;
        }
        while(n%2==0)
        {
            n=n/2;
        }
        for(i=3;i<=sqrt(n);i=i+2)
        {
            if(n%i==0)
            {
                k++;
                a[k]=i;
            }
            while(n%i==0)
            n=n/i;
        }
        if(n>2)
        {
            k++;
            a[k]=n;
        }
        ans1=n1;
        //printf("ans=%lf\n",ans);
        for(i=0;i<=k;i++)
        {
            //printf("mid=%d\n",a[i]);
            //ans*=(1-(1.0/a[i]));
          //  printf("ans=%lf\n",ans);
          ans1-=(ans1/a[i]);
        }
        //ans1=(int)ans;
        printf("%ld\n",ans1);
    }
    return(0);
}
