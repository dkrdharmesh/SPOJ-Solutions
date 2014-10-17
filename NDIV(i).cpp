#include<bits/stdc++.h>
using namespace std;

int a[100005];
int p[100005];
int main()
{
    int t,m,n,i,j,z,c,ans,p1,y,temp;
    p1=-1;
    ans=0;
    scanf("%d%d%d",&m,&n,&c);
    for(i=1;i<=100000;i++)
    p[i]=0;
    for(i=2;i*i<=100000;i++)
    {
        if(p[i]==0)
        {
            p1++;
            a[p1]=i;

            for(j=i+i;j<=100000;j+=i)
            p[j]=1;
        }
    }

    for(i=2;i<=100000;i++)
    {
        if(p[i]==0)
        {
            p1++;
            a[p1]=i;
        }
    }
    //printf("p1=%d\n",p1);
    for(i=m;i<=n;i++)
    {
        j=i;
        z=0;
        y=1;
        while(z<p1 &&  (a[z]*a[z]<=j))
        {
            temp=0;
            while(j%a[z]==0)
            {
                j/=a[z];
                temp++;
            }
            y*=(temp+1);
            z++;
            if(j==1)break;
        }
        if(j>1)
        y*=2;
        if(y==c)
        ans++;
    }
    printf("%d\n",ans);
}
