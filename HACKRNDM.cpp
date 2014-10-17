#include<stdio.h>
#include<algorithm>

using namespace std;
int search(int [],int,int,int);
int main()
{
    int n,k,i,b,c,d,ans;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    ans=0;
    for(i=0;i<n-1;i++)
    {
        b=a[i]+k;
        c=search(a,i+1,n-1,b);
        if(c!=-1)
        ans++;
    }
    printf("%d\n",ans);
    return 0;
}
int search(int a[],int first,int last,int val)
{
    int mid;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==val)
        return mid;
        else if(a[mid]<val)
        {
            first=mid+1;
        }
        else
        last=mid-1;
    }
    return -1;
}
