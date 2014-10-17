#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char s[5010];
    int i,s1,a1,a2,a,m,n,o,p;
    scanf("%s",&s);
    s1=strlen(s);
    while(1)
    {
        s1=strlen(s);
        if((s1==1)&&(s[0]=='0'))
        {
           return 0;
        }
        int z[s1];
        for(i=0;i<s1;i++)
        z[i]=0;
        if(s[s1-1]=='0')
        z[s1-1]=0;
        else
        z[s1-1]=1;
        if(s1>1)
        {
            if(s[s1-2]=='0')
            z[s1-2]=0;
            else

            {
                m=(int)s[s1-1]-48;
                n=(int)s[s1-2]-48;
                o=(n*10)+m;
                if(o<=26)
                z[s1-2]=z[s1-1]+1;
                else
                z[s1-2]=1;
            }
        }
        //printf("z=%d\n",z[2]);
        if(s1>2)
        {
            for(i=s1-3;i>=0;i--)
            {
                if(s[i]=='0')
                z[i]=0;
                else
                {
                    m=(int)s[i]-48;
                    n=(int)s[i+1]-48;
                    o=(m*10)+n;
                    if(o<=26)
                    z[i]+=z[i+2];
                    z[i]+=z[i+1];
                }
            }
        }
        //printf("z=%d %d %d\n",z[0],z[1],z[2]);
        printf("%d\n",z[0]);
        scanf("%s",&s);
    }
    return 0;
}
