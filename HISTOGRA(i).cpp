#include<stdio.h>

using namespace std;
long long int s[100005];
long long int a[100005];
int main()
{
    long long int n,i,area,c,b,tarea,s1;
    scanf("%lld",&n);

    s1=-1;
    while(n!=0)
    {

        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        area=0;
        i=0;
        s1=-1;
        while(i<n)
        {
            if((s1==-1)||(a[s[s1]]<=a[i]))
            {
                s1++;
                s[s1]=i;
                i++;
            }
            else
            {
                b=s[s1];
                s1--;
                if(s1==-1)
                tarea=a[b]*i;
                else
                tarea=a[b]*(i-s[s1]-1);
                if(tarea>area)
                area=tarea;
            }
        }
        while(s1!=-1)
        {
            b=s[s1];
            s1--;
            if(s1==-1)
            tarea=a[b]*i;
            else
            tarea=a[b]*(i-s[s1]-1);
            if(tarea>area)
            area=tarea;
        }
        printf("%lld\n",area);
        scanf("%lld",&n);
    }
    return 0;
}
