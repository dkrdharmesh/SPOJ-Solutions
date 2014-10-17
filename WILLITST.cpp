#include<stdio.h>

using namespace std;

int main()
{
    long long int n;
    scanf("%lld",&n);
    if((n==0)||(n==1))
    {
        printf("TAK\n");
        return(0);
    }
    while(n%2==0)
    {
        n=n/2;

    }
    if(n==1)
        printf("TAK");
    else
        printf("NIE\n");
    return(0);
}


