#include<stdio.h>

using namespace std;

int main()
{
    int n,ans,x,y,z,i;
    x=y=z=0;ans=0;
    scanf("%d",&n);
    char a[n][4];
    if(n==0)
    {
        printf("1\n");
        return(0);
    }
    getchar();
    for(i=0;i<n;i++)
    {
        gets(a[i]);
        if((a[i][0]=='1')&&(a[i][2]=='4'))
        x++;
        else if((a[i][0]=='1')&&(a[i][2]=='2'))
        y++;
        else
        z++;
    }
    //printf("%d%d%d\n",x,y,z);
    if(z>=x)
    {
        ans+=z;
        z=0;
        x=0;
    }
    else
    {
        ans+=z;
        x=x-z;
        z=0;
    }
    ans+=(y/2);
    y=y%2;
    if(y!=0)
    x=x+2;
    //printf("x=%d\n",x);
    ans+=(x/4);
    x=x%4;
    //printf("%d\n",x);
    if(x!=0)
    ans++;
    ans++;
    printf("%d\n",ans);
    return(0);
}
