#include<stdio.h>

using namespace std;

int main()
{
    int n,i,j;
    int a[20];
    a[0]=1;
    for(i=1;i<=17;i++)
    a[i]=a[i-1]*2;
    //for(i=1;i<=17;i++)
    //printf("%d ",a[i]);
    //printf("\n");
    scanf("%d",&n);
    while(n!=0)
    {
        //printf("n==%d %d\n",n,a[0]);
        j=0;
        while(n>=a[j])
        {
            j++;
            //printf("j=%d",j);
        }
        //printf("j===%d\n",j);
        if(n==a[j])
        printf("%d\n",j);
        else
        printf("%d\n",j-1);
        scanf("%d",&n);
    }
    return 0;
}
