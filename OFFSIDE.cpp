#include<stdio.h>
#include<algorithm>
#include<stdlib.h>

using namespace std;

int main()
{
    int n,m,i,j,c;
    while(1)
    {
        scanf("%d%d",&n,&m);
    if((n==0)&&(m==0))
    {
        return(0);
    }
    int a[n];int b[m];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<m;i++)
    scanf("%d",&b[i]);

    sort(a,a+n);
    sort(b,b+m);
    if(a[0]<b[1])
    printf("Y\n");
    else
    printf("N\n");
    }
    return(0);
}
