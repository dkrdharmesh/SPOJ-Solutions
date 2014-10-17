#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;
int a[1005];
int b[1005];
int close;
int bsearch(int,int,int);
int main()
{
    int t,n,i,m,ans,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        scanf("%d",&m);
        for(i=0;i<m;i++)
        scanf("%d",&b[i]);
        sort(b,b+m);
        close=100000000;
        for(i=0;i<n;i++)
        {
            temp=bsearch(0,m-1,a[i]);
            if(temp<ans)
            temp=ans;
        }
        printf("%d\n",close);
    }
    return 0;
}
int bsearch(int first,int last,int value)
{
    //printf("sdaaa\n");
    int mid,temp,temp1,d;
    if(first<=last)
    {
        mid=(first+last)/2;
        if(b[mid]==value)
        {
            close=0;
            return -1;
        }
        else if(b[mid]<value)
        {
            temp=abs(value-b[mid]);
            temp1=abs(b[last]-value);
            temp=min(temp,temp1);
            if(temp<close)
            close=temp;
            d=bsearch(mid+1,last,value);
        }
        else
        {
            temp=abs(value-b[first]);
            temp1=abs(b[mid]-value);
            temp=min(temp,temp1);
            if(temp<close)
            close=temp;
            d=bsearch(first,mid-1,value);
        }
    }
    return close;
}
