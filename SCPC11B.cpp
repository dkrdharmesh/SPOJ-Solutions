#include<stdio.h>
#include<algorithm>

using namespace std;
int a[1500];
int main()
{
    int n,temp,i;
    scanf("%d",&n);
    while(n!=0)
    {
        temp=0;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        sort(a,a+n);
        if(a[0]!=0)
        temp=1;

        if(temp!=1)
        {
            for(i=1;i<n;i++)
            {
                if(a[i]>a[i-1]+200)
                {
                    temp=1;
                    i=n;
                }
            }

            if(temp!=1)
            {
                if((200-(1422-a[n-1]))<1422-a[n-1])
                temp=1;

                if(temp!=1)
                {
                    for(i=n-2;i>=0;i--)
                    {
                        if(a[i]<a[i+1]-200)
                        temp=1;
                    }
                }
            }
        }
        if(temp==1)
        printf("IMPOSSIBLE\n");
        else
        printf("POSSIBLE\n");
        scanf("%d",&n);
    }
    return 0;
}
