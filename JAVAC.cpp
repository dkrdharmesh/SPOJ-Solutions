#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int s;
    char a[300];
    char b[300];
    int c,d,e,i,z,flag;


    while(scanf("%s",&a)!=EOF)
    {
        flag=0;
        d=0;e=0;c=-1;
        s=strlen(a);
        if((a[0]>='A')&&(a[0]<='Z'))
        flag=1;
        if(a[0]=='_')
        flag=1;

        for(i=0;i<s;i++)
        {
            if((a[i]>='a')&&(a[i]<='z'))
            {
                c++;
                b[c]=a[i];
               // printf("aa %c\n",b[c]);
            }
            else if(a[i]=='_')
            {
                d++;
                if(i==(s-1))
                flag=1;
                i++;
                if(a[i]=='_')
                flag=1;
                if((a[i]>='A')&&(a[i]<='Z'))
                e++;
                if(a[i]=='_')
                d++;
                z=(int)a[i];
                z=z-32;
                c++;
                b[c]=(char)z;
            }
            else if((a[i]>='A')&&(a[i]<='Z'))
            {
                e++;
                c++;
                b[c]='_';
                c++;
                z=(int)a[i];
                z=z+32;
                b[c]=(char)z;


            }
        }
        //printf("%d %d\n",e,d);
            if(flag==1)
            {
                printf("Error!");
            }
            else if((e>=1)&&(d>=1))
            {
                printf("Error!");
            }
            else
            {
                for(i=0;i<=c;i++)
                printf("%c",b[i]);
            }
            printf("\n");

    }

    return(0);
}
