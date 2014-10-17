#include<stdio.h>
#include<math.h>

using namespace std;

int abcd(long long int);

int main()
{
    long long int temp,e,f,g,h;
    int x,y,z;
    char a[6];
    scanf("%s",&a);
    //printf("%c%c%c\n",a[0],a[1],a[3]);
    while(1)
    {
        if((a[0]=='0')&&(a[1]=='0')&&(a[3]=='0'))
        return 0;
        //printf("sad\n");
        x=a[0]-'0';
        y=a[1]-'0';
        z=a[3]-'0';
        temp=pow(10,z);
        e=((x*10)+y)*temp;
        f=abcd(e);
        //f=(int)(log(e)/log(2));
        g=e-(2*f);
        h=g*2+1;
        printf("%d\n",h);
        scanf("%s",&a);
    }
    return(0);
}
int abcd(long long int x)
{
    long long int y,p,h=1;
    p=pow(2,h);
    while(p<=x)
    {
        h=h+1;
        p=pow(2,h);
    }
    y=pow(2,h-1);
    return y;
}
