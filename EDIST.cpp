#include<stdio.h>
#include<string.h>

using namespace std;
int min(int,int);
int main()
{
    int t,i,s1,s2,ans,j,e,f,g;
    scanf("%d",&t);
    static int x[2001][2001];
    //getchar();
    while(t--)
    {
        ans=0;
        char a[2001];
        char b[2001];
        scanf("%s",&a);
        scanf("%s",&b);
        s1=strlen(a);
        s2=strlen(b);
        int x[s1+1][s2+1];
        x[0][0]=0;
        for(i=0;i<=s1;i++)
        x[i][0]=i;
        for(i=0;i<=s2;i++)
        x[0][i]=i;
        for(i=1;i<=s1;i++)
        {
            for(j=1;j<=s2;j++)
            {
                e=x[i-1][j]+1;
                f=x[i][j-1]+1;
                g=x[i-1][j-1];
                if(a[i-1]!=b[j-1])
                g++;
                x[i][j]=min(e,min(f,g));
            }
        }
        printf("%d\n",x[s1][s2]);
    }
    return(0);
}
int min(int a,int b)
{
    if(a<b)
    return(a);
    else
    return(b);
}
