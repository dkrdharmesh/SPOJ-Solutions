#include<stdio.h>

using namespace std;
int a[1000005];
int main()
{
    int k,l,m,i;
    scanf("%d%d%d",&k,&l,&m);
    a[1]=0;
    for(i=2;i<k;i++)
    {
        if(i%2==0)
        a[i]=1;
        else
        a[i]=0;
    }
    a[k]=0;
    for(i=k+1;i<l;i++)
    {
        if((a[i-1]==1)||(a[i-k]==1))
        a[i]=0;
        else
        a[i]=1;
    }
    a[l]=0;
    for(i=l+1;i<=1000000;i++)
    {
        if((a[i-1]==1)||(a[i-k]==1)||(a[i-l]==1))
        a[i]=0;
        else
        a[i]=1;
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&k);
        if(a[k]==0)
        printf("A");
        else
        printf("B");
    }
    printf("\n");
    return 0;
}
