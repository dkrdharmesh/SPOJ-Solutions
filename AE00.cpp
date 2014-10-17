#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int n,ans,c,i,j;
    scanf("%d",&n);
    if(n==1)
    {
        printf("1\n");
        return 0;
    }
    else if(n==2)
    {
        printf("2\n");
        return 0;
    }
    int a[10001]={0};
    a[1]=1;
    a[2]=2;

    for(i=3;i<10001;i++)
    {
        c=0;
        j=1;
        while(j<=sqrt(i))
        {
            if(i%j==0)
            c++;
            j++;
        }
        a[i]=a[i-1]+c;

    }
    printf("%d\n",a[n]);
    return(0);
}
