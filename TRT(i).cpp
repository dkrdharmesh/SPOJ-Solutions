#include<stdio.h>

using namespace std;
int a[2001];
int b[2001][2001]={0};
int max(int,int);
int trt(int,int,int);
int main()
{
    int n,ans,i,day;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    day=1;
    ans=trt(0,n-1,day);
    printf("%d\n",ans);
}
int trt(int i,int j,int day)
{
    if(i==j)
    {
        if(b[i][j]==0)
        b[i][j]=a[i]*day;
        return(b[i][j]);
    }
    else
    {
        if(b[i+1][j]==0)
        b[i+1][j]=trt(i+1,j,day+1);
        if(b[i][j-1]==0)
        b[i][j-1]=trt(i,j-1,day+1);
        return(max(a[i]*day+b[i+1][j],a[j]*day+b[i][j-1]));
    }
    //return(max(a[i]*day+trt(i+1,j,day+1),a[j]*day+trt(i,j-1,day+1)));
}
int max(int a,int b)
{
    if(a>b)
    return(a);
    else
    return(b);
}
