#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char a[2000];
    int i,s,k,ans,k1;
    gets(a);
    s=strlen(a);
    while(a[0]!='*')
    {
        i=0;ans=0;
        k=(int)a[0];
        if(k>90)
        k=k-32;
        while((i<s))
        {
            if(a[i]==' ')
            {
                k1=(int)a[i+1];
                if(k1>90)
                k1=k1-32;

                if(k1!=k)
                ans=1;
            }
            i++;
        }
        if(ans==0)
        printf("Y\n");
        else
        printf("N\n");
        gets(a);
        s=strlen(a);
    }
    return 0;
}
