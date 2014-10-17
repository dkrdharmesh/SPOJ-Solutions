#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    int t,n,m,h,i,flag;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&m,&h);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        sort(a,a+n);
        flag=0;
        i=n-1;
        while(m>0)
        {
            if(a[i]>h)
            {
                a[i]-=h;
                m--;
            }
            else
            i--;
            if(i==-1)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return(0);
}
