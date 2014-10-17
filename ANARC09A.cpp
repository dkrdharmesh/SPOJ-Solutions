#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char a[2005];
    char b[2005];
    int c,i,ans,top,s,cl,op,k;
    scanf("%s",&a);
    k=1;
    while(a[0]!='-')
    {
        ans=0;top=-1;cl=0,op=0;
        s=strlen(a);
        for(i=0;i<s;i++)
        {
            if(a[i]=='}')
            {
                top++;
                b[top]=a[i];
                cl++;
            }
            else
            break;
        }
        for(;i<s;i++)
        {
            if(a[i]=='{')
            {
                top++;
                b[top]=a[i];
                op++;
            }
            else if(a[i]=='}')
            {
                if(b[top]=='{')
                {
                    top--;
                    op--;
                }
                else
                {
                    top++;
                    b[top]=a[i];
                    cl++;
                }
            }
        }
        ans=(op+cl)/2;
        if((op%2==1)&&(cl%2==1))
        ans++;
        printf("%d. %d\n",k,ans);
        k++;
        scanf("%s",&a);
    }
    return(0);
}
