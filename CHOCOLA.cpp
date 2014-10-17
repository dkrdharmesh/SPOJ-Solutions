#include<stdio.h>
#include<algorithm>

using namespace std;
bool myfunc(int,int);
int main()
{
    int t,n,m,i,j,ans;
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        scanf("%d%d",&m,&n);
        int a[n-1];
        int b[m-1];
        for(i=0;i<m-1;i++)
        scanf("%d",&b[i]);

        for(i=0;i<n-1;i++)
        scanf("%d",&a[i]);

        sort(a,a+(n-1),myfunc);
        sort(b,b+(m-1),myfunc);

        i=0;j=0;
        while((i<n-1)&&(j<m-1))
        {
            if(a[i]>b[j])
            {

                ans+=((j+1)*a[i]);
                //printf("in a %d %d\n",a[i],ans);
                i++;
            }
            else
            {

                ans+=((i+1)*b[j]);
                //printf("in b %d %d\n",b[j],ans);
                j++;
            }
        }
       // printf("%d %d %d\n",i,j,ans);
        if(i==n-1)
        {
            while(j<m-1)
            {

                ans+=((i+1)*b[j]);
              //  printf("in b %d %d\n",j,ans);
                j++;
            }
        }
        else if(j==m-1)
        {
            while(i<n-1)
            {
                ans+=((j+1)*a[i]);
                i++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
bool myfunc(int i,int j)
{
    if(i>j)
    return true;
    else
    return false;
}
