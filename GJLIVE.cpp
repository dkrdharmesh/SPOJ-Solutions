#include<stdio.h>

using namespace std;

int main()
{
    int a[10],sum = 0;
    for (int i = 0; i < 10; ++i)
     {
        scanf("%d",&a[i]);
        sum+=a[i];
        if (sum >= 100)
        {
            if(sum-100<=100-(sum-a[i]))
            printf("%d\n",sum);
            else
            printf("%d\n", sum-a[i]);
            return 0;
        }
    }
    printf("%d\n",sum);
    return 0;
}
