#include<stdio.h>
#include<string>

using namespace std;

int main()
{
     int t,i,s,ans,no,no1;
   // char a[100000];
    char c,sign;
    scanf("%d",&t);
    //c=getchar();
    while(t--)
    {
        c=getchar();
        char a[100000];
        scanf("%s",&a);
        s=strlen(a);
        ans=0;no=0;no1=0;
        i=0;
        while((a[i]>='0')&&(a[i]<='9')&&(i<s))
            {
                //printf("sdasda\n");
                no=(no*10)+((int)a[i]-48);
                i++;
            }
            printf("s=%lld\n",s);
            //printf("aaa%czz\n",a[i]);
        while((a[i]==' ')&&(i<s))
        {
            printf("fdsdad\n");
            i++;
        }
        //printf("i=%lld\n",i);
        sign=a[i];
        no1=0;
        while((a[i]>='0')&&(a[i]<='9')&&(i<s))
            {
                no1=(no1*10)+((int)a[i]-48);
                i++;
            }
        //    printf("no1=%lld\n",no1);
            if(sign=='+')
            ans=(no+no1);
            else if(sign=='-')
            ans=(no-no1);
            else if(sign=='*')
            ans=(no*no1);
            else if(sign=='/')
            ans=(no/no1);
            //printf("no=%lld\n",ans);
            printf("i=%lld\n",i);
        for(;a[i]!='=';i++)
        {
            while((a[i]==' ')&&(i<s))
            i++;
            sign=a[i];
            if(i>=s)
            break;
            while((a[i]==' ')&&(i<s))
            i++;
            no1=0;
            while((a[i]>='0')&&(a[i]<='9')&&(i<s))
            {
                no1=(no1*10)+((int)a[i]-48);
                i++;
            }
            if(sign=='+')
            ans=(ans+no1);
            else if(sign=='-')
            ans=(ans-no1);
            else if(sign=='*')
            ans=(ans*no1);
            else if(sign=='/')
            ans=(ans/no1);

        }
        printf("%lld\n",ans);
    }
    return(0);
}
