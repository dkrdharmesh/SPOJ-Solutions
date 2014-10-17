#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;
int a[50005]={0};
int b[3500];
int main()
{
    int i,b1,j,c,n;
    b1=0;
    for(i=2;i<=35000;i++)
    {
        if(a[i]==0)
        {
            b1++;
            a[b1]=i;
            c=0;
            for(j=i+1;j<=35000;j++)
            {
                if(a[j]==0)
                c++;
                if(c==i)
                {
                    a[j]=1;
                    c=0;
                }
            }
        }
    }
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%d\n",a[n]);
        scanf("%d",&n);
    }
    //printf("%d\n",b1);
    return 0;
}
