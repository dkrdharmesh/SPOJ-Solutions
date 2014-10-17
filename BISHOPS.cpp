#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int s,c,d,e,i,j;
    char a[105];
    char b[105];
    while(scanf("%s",&a)!=EOF)
    {
        s=strlen(a);c=0;
        if((s==1)&&(a[0]=='0'))
        {
            printf("0\n");
            continue;
        }
        else if((s==1)&&(a[0]=='1'))
        {
            printf("1\n");
            continue;
        }
        for(i=s-1;i>=0;i--)
        {
            d=(int)a[i]-48;
            d=d*2;
            d=d+c;
            c=d/10;
            d=d%10;
            b[i+1]=(char)(d+48);
        }
        b[0]=(char)(c+48);
        //for(i=0;i<=s;i++)
        //printf("%c",b[i]);
        //printf("\n");
        i=s;
        d=(int)(b[i]-48);
        if(d>=2)
        {
            d=d-2;
            b[i]=(char)(d+48);
        }
        else
        {
            i--;
            while(((int)b[i]-48)==0)
            i--;
            //printf("i=%d\n",i);
            d=(int)(b[i]-48);
            d--;
            b[i]=(char)(d+48);
            //printf("bi=%c\n",b[i]);
            for(j=i+1;j<s;j++)
            {
                b[j]='9';
            }
            d=((int)(b[s])-48)+10;
            d=d-2;
            b[s]=(char)(d+48);
        }
        if(b[0]!='0')
        printf("%c",b[0]);
        for(i=1;i<=s;i++)
        printf("%c",b[i]);
        printf("\n");
    }
    return(0);
}
