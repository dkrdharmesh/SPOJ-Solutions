#include<stdio.h>

using namespace std;

int main()
{
    int n,i,b,count,d,z1;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        return(0);
        int a[n];
        int z[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        count=1;b=0;z1=-1;
        while(1)
        {
            if(b==n)
            {
                if((z1==-1)&&(count==n+1))
                {
                    printf("yes\n");
                    break;
                }
                else if(z[z1]==count)
                {
                    z[z1]=0;
                    count++;
                    z1--;
                }
                else
                {
                    printf("no\n");
                    break;
                }
            }
            if(a[b]==count)
            {
                b++;
                count++;
            }
            else if(z1>=0)
            {
                if(z[z1]==count)
                {
                    count++;
                    z[z1]=0;
                    z1--;
                }
                 else if(b!=n)
                {
                     z1++;
                     z[z1]=a[b];
                     b++;
                }
            }
            else if(b!=n)
            {
                z1++;
                z[z1]=a[b];
                b++;
            }


        }

    }
    return(0);
}
