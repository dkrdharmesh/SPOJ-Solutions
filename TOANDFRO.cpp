#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int n,s1,b,c,j,i;

    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        return(0);
        char s[250];
        scanf("%s",&s);
        s1=strlen(s);
        char a[250/n][n];
        b=0;c=0;
        for(i=0;i<s1;i++)
        {
            if(b%2==0)
            {
                a[b][c]=s[i];
                c++;
                if(c==n)
                {
                  c=n-1;
                  b++;
                }
            }
            else
            {
                a[b][c]=s[i];
                c--;
                if(c==-1)
                {
                    c=0;
                    b++;
                }
            }


        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<b;j++)
            {
                printf("%c",a[j][i]);

            }
        }

            printf("\n");

    }

        return(0);

}
