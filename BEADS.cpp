#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char a[10005];
    int b[10005];
    int n,i,t1,t2,ans,count,temp,s,b1;
    char small;
    scanf("%d",&n);
    //getchar();
    while(n--)
    {
        scanf("%s",&a);
        s=strlen(a);
        //printf("s=%d\n",s);
        small=a[0];
        for(i=0;i<s;i++)
        if(a[i]<small)
        small=a[i];
        b1=-1;
        for(i=0;i<s;i++)
        {
            if(a[i]==small)
            {
                b1++;
                b[b1]=i;
            }
        }
        ans=b[0];
        for(i=0;i<=b1;i++)
        {
            //if(i==10)
            //printf("%d\n",i);
            temp=0;
            t1=ans;
            t2=b[i];
            count=0;
            while(count<s)
            {
                if(a[t2]<a[t1])
                {
                    ans=b[i];
                    temp=1;
                    count=s;
                }
                else if(a[t2]==a[t1])
                {
                    //t1=(t1+1)%s;
                    //t2=(t2+1)%s;
                    count++;
                }
                else
                {
                    count=s;
                }
                t1++;
                t2++;
                if(t1==s)
                t1=0;
                if(t2==s)
                t2=0;
            }
        }
        printf("%d\n",ans+1);
    }
    return 0;
}
