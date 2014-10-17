#include<stdio.h>

using namespace std;

int main()
{
    int t,n,i,temp;
    scanf("%d",&t);

    while(t--)
    {
        temp=-10000;
        scanf("%d",&n);
        int a[1001]={0};int b[1001]={0};
        int c[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&c[i]);
            if(c[i]<0)
            {
                a[-c[i]]++;
                if((a[-c[i]])>(n/2))
                temp=c[i];
            }
            else
            {
                a[c[i]]++;
                if((a[c[i]])>(n/2))
                temp=c[i];
            }
        }
        if(temp==-10000)
        printf("NO\n");
        else
        printf("YES %d\n",temp);
    }
    return 0;

}
