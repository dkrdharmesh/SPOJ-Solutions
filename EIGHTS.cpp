#include<stdio.h>

using namespace std;

int main()
{
    //unsigned long long int a[2097154];
    unsigned long long int t,k,i,z;
    //z=9223372036854775808;
    scanf("%lld",&t);
    /*a[1]=192;
    for(i=2;i<=2097152;i++)
    {
        if(((a[i-1]+250)*(a[i-1]+250)*(a[i-1]+250))<=z)
        a[i]=a[i-1]+250;
        else
        break;
    }*/
    while(t--)
    {
        scanf("%lld",&k);
        z=192+(k-1)*250;
        printf("%lld\n",z);
    }
    return(0);

}
