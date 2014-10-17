#include<stdio.h>

using namespace std;

int main()
{
    char y;
    int n;
    int z[10];
    z[1]=1;z[2]=20;z[3]=360;
    z[4]=7200;z[5]=144000;z[6]=2880000;z[7]=57600000;
    scanf("%d",&n);
    y=getchar();
    int d,l,i,ans,j,temp;
    while(n!=0)
    {
        char a[n][30];
        ans=0;
        for(i=n;i>=1;i--)
        {
            gets(a[i]);
            j=0;temp=0;
            l=d=0;
            while(a[i][j]!='\0')
            {
                if(a[i][j]=='.')
                d++;
                else if(a[i][j]=='-')
                l++;
                j++;
            }
            temp=(l*5)+d;
            ans+=temp*z[i];
        }
        printf("%d\n",ans);
        scanf("%d",&n);
        y=getchar();
    }
    return(0);
}
