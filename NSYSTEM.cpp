#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>

using namespace std;

char a[50];
char b[50];
int main()
{
    int t,s1,s2,va,vb,j,d,e,f;
    int m=1000;int c=100;int x=10;int i=1;
    scanf("%d",&t);
    int z[5];
    z[1]=1;
    z[2]=10;
    z[3]=100;
    z[4]=1000;
    char z1[5];
    z1[1]='i';
    z1[2]='x';
    z1[3]='c';
    z1[4]='m';
    getchar();
    while(t--)
    {
        scanf("%s%s",&a,&b);
        //printf("--%s %s\n",&a,&b);
        getchar();
        s1=strlen(a);
        s2=strlen(b);
        va=vb=0;
        for(j=0;j<s1;j++)
        {
            if(a[j]=='m')
            va+=1000;
            else if(a[j]=='c')
            va+=100;
            else if(a[j]=='x')
            va+=10;
            else if(a[j]=='i')
            va+=1;
            else
            {
                d=(int)a[j]-48;
                if(a[j+1]=='m')
                va+=1000*d;
                else if(a[j+1]=='c')
                va+=100*d;
                else if(a[j+1]=='x')
                va+=10*d;
                else if(a[j+1]=='i')
                va+=1*d;
                j++;
            }
        }
        for(j=0;j<s2;j++)
        {
            if(b[j]=='m')
            vb+=1000;
            else if(b[j]=='c')
            vb+=100;
            else if(b[j]=='x')
            vb+=10;
            else if(b[j]=='i')
            vb+=1;
            else
            {
                d=(int)b[j]-48;
                if(b[j+1]=='m')
                vb+=1000*d;
                else if(b[j+1]=='c')
                vb+=100*d;
                else if(b[j+1]=='x')
                vb+=10*d;
                else if(b[j+1]=='i')
                vb+=1*d;
                j++;
            }
        }
        //printf("va=%d vb=%d\n",va,vb);
        va=va+vb;
        vb=va;
        d=0;
        while(vb>0)
        {
            d++;
            vb/=10;
        }
        while(va>0)
        {
            e=pow(10,d-1);
            f=va/e;
            //if(f==0)
            //f=va%e;
            if(f==1)
            printf("%c",z1[d]);
            else
            {
                printf("%d%c",f,z1[d]);
            }
            f=f*e;
            va-=f;
            vb=va;
            d=0;
            while(vb>0)
            {
                d++;
                vb/=10;
            }
        }
        printf("\n");
    }
    return 0;
}
