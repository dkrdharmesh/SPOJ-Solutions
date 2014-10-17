#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int t,a,b,c,d,a1,b1,c1,d1,a2,b2,c2,d2,temp,ans;
    scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&a1,&b1,&c1,&d1);
    while(a!=-1)
    {
        //scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&a1,&b1,&c1,&d1);
        a2=a/a1;
        b2=b/b1;
        c2=c/c1;
        d2=d/d1;

        if(a%a1!=0)
        a2++;
        if(b%b1!=0)
        b2++;
        if(c%c1!=0)
        c2++;
        if(d%d1!=0)
        d2++;
        temp=max(a2,max(b2,max(c2,d2)));
        ans=0;
        printf("%d ",((temp*a1)-a));
        printf("%d ",((temp*b1)-b));
        printf("%d ",((temp*c1)-c));
        printf("%d\n",((temp*d1)-d));

        //printf("%d\n",ans);

        scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&a1,&b1,&c1,&d1);
    }
    return 0;
}
