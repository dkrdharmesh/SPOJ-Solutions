#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;



struct data
{
    long long int x;
    long long int y;
    long long int u;
    char z[35];
};
bool myfunc(struct data,struct data);
int main()
{
    int t,n,i,s1,j,c;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        getchar();
        struct data a[n];
        for(i=0;i<n;i++)
        {
            a[i].y=0;
            gets(a[i].z);
            s1=strlen(a[i].z);
            //printf("%d\n",s1);
            for(j=12;j<=30;j++)
            {
                if((j==16)||(j==21)||(j==26))
                continue;
                //printf("j=%d\n",j);
                a[i].y=(a[i].y*10)+(((int)a[i].z[j])-48);
            }
            a[i].x=0;
            a[i].x=(a[i].x*10)+(((int)a[i].z[0])-48);
            a[i].x=(a[i].x*10)+(((int)a[i].z[1])-48);
            a[i].u=0;
            for(j=3;j<=10;j++)
            {
                a[i].u=(a[i].u*10)+(((int)a[i].z[j])-48);
            }

        }
        //for(i=0;i<n;i++)
        //printf("ss %lld\n",a[i].y);

        sort(a,a+n,myfunc);
        c=1;
        i=1;
        while(i<n)
        {
            if((a[i].y==a[i-1].y)&&(a[i].x==a[i-1].x)&&(a[i].u==a[i-1].u))
            {
                i++;
                c++;
            }
            else
            {
                printf("%s %d\n",a[i-1].z,c);
                c=1;
                i++;
            }
        }
        printf("%s %d\n",a[i-1].z,c);
        printf("\n");
    }
    return(0);
}
bool myfunc(struct data i,struct data j)
{
    if(i.x<j.x)
    return(true);
    else
    {
        if(i.x==j.x)
        {
            if(i.u<j.u)
            return(true);
            else
            {
                if(i.u==j.u)
                return(i.y<j.y);
                else
                return(false);
            }
        }
        else
        return(false);
    }
}
