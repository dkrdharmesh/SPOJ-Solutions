#include<stdio.h>
#include<math.h>

using namespace std;
int prime(int);

int main()
{
    int t,m,n,i,j,count,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        if(m==1)
        m++;
        int a[100010]={0};
        count=0;
        if(m==2)
        z=m+2;
        else if(m%2==0)
        z=m;
        else
        z=m+1;
        for(i=z;i<=n;i+=2)
        a[i-(m-1)]=1;

        for(i=3;i<=sqrt(n);i+=2)
        {
            if((i>=m)&&(prime(i)==1))
            {
                a[((((m-1)/i)+1)*i)-(m-1)]=-1;
                //printf("%dcsadf\n",i);
            }
            //printf("aa%d\n",a[2]);
            for(j=((((m-1)/i)+1)*i);j<=n;j+=i)
            {
                a[j-(m-1)]++;
            }
        }
        for(i=1;i<=(n-m)+1;i++)
        if(a[i]==0)
        printf("%d\n",(i+(m-1)));
        printf("\n");

    }
    return(0);
}
int prime(int n)
{
    if(n==1)
    return 0;
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return(0);
    }
    return(1);
}
