#include<stdio.h>

using namespace std;

int main()
{
    int t,n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        if(n%2==0)
            printf("Thankyou Shaktiman\n");
        else
            printf("Sorry Shaktiman\n");

    }
    return 0;
}

