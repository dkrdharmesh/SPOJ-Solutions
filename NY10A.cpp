#include<stdio.h>

using namespace std;

int main()
{
    int t,b,c1,c2,c3,c4,c5,c6,c7,c8,i;
    scanf("%d",&t);
    while(t--)
    {
        char a[41];
        scanf("%d%s",&b,&a);
        c1=c2=c3=c4=c5=c6=c7=c8=0;
        for(i=0;i<=37;i++)
        {
            if((a[i]=='T')&&(a[i+1]=='T')&&(a[i+2]=='T'))
            c1++;
            else if((a[i]=='T')&&(a[i+1]=='T')&&(a[i+2]=='H'))
            c2++;
            else if((a[i]=='T')&&(a[i+1]=='H')&&(a[i+2]=='T'))
            c3++;
            else if((a[i]=='T')&&(a[i+1]=='H')&&(a[i+2]=='H'))
            c4++;
            else if((a[i]=='H')&&(a[i+1]=='T')&&(a[i+2]=='T'))
            c5++;
            else if((a[i]=='H')&&(a[i+1]=='T')&&(a[i+2]=='H'))
            c6++;
            else if((a[i]=='H')&&(a[i+1]=='H')&&(a[i+2]=='T'))
            c7++;
            else
            c8++;
        }
        printf("%d %d %d %d %d %d %d %d %d\n",b,c1,c2,c3,c4,c5,c6,c7,c8);
    }
    return(0);
}
