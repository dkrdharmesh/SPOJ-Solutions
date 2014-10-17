#include<stdio.h>

using namespace std;
int a[10000000]={0};
int b[500005];

int main()
{
    int k,i;
    a[0]=1;
    b[0]=0;
    for(i=1;i<=500000;i++)
    {
        if(((b[i-1]-i)>0)&&(a[b[i-1]-i]!=1))
        {
            b[i]=b[i-1]-i;
            a[b[i-1]-i]=1;
        }
        else
        {
            b[i]=b[i-1]+i;
            a[b[i-1]+i]=1;
        }
    }
    scanf("%d",&k);
    while(k!=-1)
    {
        printf("%d\n",b[k]);
        scanf("%d",&k);
    }
    return 0;
}
