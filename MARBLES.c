#include<stdio.h>

int main()
{
    int t;
    long long int n,r,res,d,m;
    scanf("%d",&t);
    while(t--)
    {
        res=1;m=n;
        scanf("%lld%lld",&n,&r);
        n--;
        r--;

        if(r>n-r)
        {
            d=1;m=n;
            while(d<=n-r)
            {
                res=res*(m--);
                res=res/d;
                d++;
            }
        }

    else
    {
        d=1;m=n;
        while(d<=r)
        {
            res=res*(m--);
            res=res/d;
            d++;
        }
    }
    printf("%lld\n",res);

    }
    return 0;
}


