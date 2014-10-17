#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;
long long int a[100005];
long long int st[400005];
long long int pt[400005];
int n;

void update(long long int [],int,int,int,int,long long int,int);
long long int sum(long long int [],int ,int,int,int,int,long long int);
int main()
{
    int t,c,o,p,q,i,j;
    long long int v,ans;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d%d",&n,&c);
        for(i=0;i<400005;i++)
        {
            st[i]=0;
            pt[i]=0;
        }
        for(i=0;i<n;i++)
        a[i]=0;
        for(i=1;i<=c;i++)
        {
            scanf("%d",&o);
            p--;q--;
            if(o==0)
            {
                scanf("%d%d%lld",&p,&q,&v);
                p--;
                q--;
                update(st,0,n-1,p,q,v,0);
            }
            else
            {
                scanf("%d%d",&p,&q);
                p--;q--;
                ans=0;
                ans=sum(st,0,n-1,p,q,0,0);
                printf("%lld\n",ans);
            }
        }
        //for(i=0;i<15;i++)
        //printf("%lld ",st[i]);

    }
    return 0;
}
long long int sum(long long int st[],int ss,int se,int qs,int qe,int i,long long int carry)
{
    long long int ans1,ans2,ans;
    int mid;
    if((ss>qe)||(se<qs))
    return 0;
    if((qs<=ss)&&(qe>=se))
    {
        return(st[i]+carry*(se-ss+1));
    }

    mid=(ss+se)/2;
    ans1=sum(st,ss,mid,qs,qe,(2*i)+1,carry+pt[i]);
    ans2=sum(st,mid+1,se,qs,qe,(2*i)+2,carry+pt[i]);
    ans=ans1+ans2;

    return ans;

}
void update(long long int st[],int ss,int se,int qs,int qe,long long int v,int i)
{
    if((qe<ss)||(qs>se))
    return ;
    if((ss>=qs)&&(se<=qe))
    {
        st[i]+=((se-ss+1)*v);
        pt[i]+=v;
        return ;
    }
    int mid=(ss+se)/2;
    update(st,ss,mid,qs,qe,v,2*i+1);
    update(st,mid+1,se,qs,qe,v,2*i+2);
    st[i]=st[2*i+1]+st[2*i+2]+(se-ss+1)*pt[i];
}
