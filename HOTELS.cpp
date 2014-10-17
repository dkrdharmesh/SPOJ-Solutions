#include<stdio.h>

using namespace std;

int main()
{
    long long int n,m,i,j,ans,ansi,ansj,temp,tempi,tempj;
    scanf("%lld%lld",&n,&m);
    int a[n];
    ans=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==m)
        {
            ans=1;
        }
    }
    if(ans==1)
    {
        printf("%lld\n",m);
        return 0;
    }
    ans=a[0];
    ansi=0;
    ansj=0;
    temp=a[0];
    tempi=0;
    tempj=0;
    if(ans>m)
    {
        ans=0;
        ansi=1;
        ansj=1;
        temp=0;
        tempi=1;
        tempj=1;
    }
    for(i=1;i<n;i++)
    {
        if(temp+a[i]==m)
        {
            printf("%lld\n",m);
            return 0;
        }
        else if(temp+a[i]<m)
        {
            temp+=a[i];
            tempj=i;
            //printf("temp=%lld with tempi=%lld tempj=%lld\n",temp,tempi,tempj);
            if(temp>ans)
            {
                ans=temp;
                ansi=tempi;
                ansj=tempj;
            }
        }
        else
        {
            for(j=tempi;j<=tempj;j++)
            {
                temp-=a[j];
                //printf("temp=%lld with tempi=%lld and tempj=%lld\n",temp,tempi,tempj);
                if(temp+a[i]==m)
                {
                    //printf("temp=%lld a[i]=%lld\n",temp,a[i]);
                    printf("%lld\n",m);
                    return 0;
                }
                else if(temp+a[i]<m)
                {
                   temp+=a[i];
                   tempi=j+1;
                   tempj=i;
                   //printf("temp=%lld with tempi==%lld and tempj=%lld ans=%lld\n",temp,tempi,tempj,ans);
                   if(temp>ans)
                   {
                       ans=temp;
                       ansi=tempi;
                       ansj=tempj;
                   }
                   j=100000000;
                }
            }
        }

    }
    printf("%lld\n",ans);
    return 0;
}
