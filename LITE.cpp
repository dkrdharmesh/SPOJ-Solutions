#include<stdio.h>
#include<algorithm>

using namespace std;
int a[400009]={0};
int lazy[400009]={0};
int c[400009]={0};
int find(int [],int,int,int,int,int);
void update(int [],int,int,int,int,int);
int main()
{
    int n,q,i,x,y,z,ans,j;
    scanf("%d%d",&n,&q);
    for(i=1;i<=q;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        if(x==0)
        {
            y--;z--;
            update(a,0,n-1,y,z,0);
        }
        else
        {
            y--;z--;
            ans=find(a,0,n-1,y,z,0);
            printf("%d\n",ans);
        }
        //for(j=0;j<=6;j++)
        //printf("%d ",c[j]);
        //printf("\n");
    }

    return 0;
}
void update(int a[],int ss,int se,int qs,int qe,int i)
{
    if(lazy[i]!=0)
    {
        a[i]=(a[i]+lazy[i])%2;
        c[i]=(se-ss+1)-c[i];
        if(ss!=se)
        {
            //printf("lazy at %d\n",i);
            lazy[2*i+1]=(lazy[2*i+1]+lazy[i])%2;
            lazy[2*i+2]=(lazy[2*i+2]+lazy[i])%2;
        }
        lazy[i]=0;
    }
    if((se<qs)||(qe<ss))
    return;

    if((ss>=qs)&&(se<=qe))
    {
        a[i]=(a[i]+1)%2;
        c[i]=(se-ss+1)-c[i];
        if(ss!=se)
        {
            lazy[2*i+1]=(lazy[2*i+1]+1)%2;
            lazy[2*i+2]=(lazy[2*i+2]+1)%2;
        }
        //printf("efaesef\n");
        return;
    }
    int mid=(ss+se)/2;
    update(a,ss,mid,qs,qe,2*i+1);
    update(a,mid+1,se,qs,qe,2*i+2);
    c[i]=c[2*i+1]+c[2*i+2];
    return;
}
int find(int a[],int ss,int se,int qs,int qe,int i)
{
    if(lazy[i]!=0)
    {
        //printf("i=%d\n",i);
        a[i]=(a[i]+lazy[i])%2;
        c[i]=(se-ss+1)-c[i];
        if(ss!=se)
        {
            lazy[2*i+1]=(lazy[2*i+1]+lazy[i])%2;
            lazy[2*i+2]=(lazy[2*i+2]+lazy[i])%2;
        }
        lazy[i]=0;
    }
    if((se<qs)||(ss>qe))
    return 0;
    if((ss>=qs)&&(se<=qe))
    {
        return(c[i]);
    }
    int mid=(ss+se)/2;
    return(find(a,ss,mid,qs,qe,2*i+1)+find(a,mid+1,se,qs,qe,2*i+2));
}

