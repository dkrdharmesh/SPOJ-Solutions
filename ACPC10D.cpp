#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;
int a[100005][3];
int b[100005][3];

int main()
{
    int n,i,c;
    c=1;
    scanf("%d",&n);
    while(n!=0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
        }
        b[0][0]=a[0][0];
        b[0][1]=a[0][1];
        b[0][2]=a[0][2]+a[0][1];
        for(i=1;i<n;i++)
        {
            if(i==1)
            {
                b[i][0]=b[i-1][1]+a[i][0];
                b[i][1]=a[i][1]+min(b[i-1][1],min(b[i-1][2],b[i][0]));
                b[i][2]=a[i][2]+min(b[i-1][1],min(b[i-1][2],b[i][1]));
            }
            else
            {
                b[i][0]=a[i][0]+min(b[i-1][0],b[i-1][1]);
                b[i][1]=a[i][1]+min(b[i-1][0],min(b[i-1][1],min(b[i-1][2],b[i][0])));
                b[i][2]=a[i][2]+min(b[i-1][1],min(b[i-1][2],b[i][1]));
            }
        }
        printf("%d. %d\n",c,b[n-1][1]);
        c++;
        scanf("%d",&n);
    }
    return 0;
}
