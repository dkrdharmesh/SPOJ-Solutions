#include<stdio.h>
#include<algorithm>

using namespace std;
long long int a[1005];
long long int search(long long int,long long int,long long int);
int main()
{
    long long int t,n,i,b,c,j,p,e,y,z;
    //printf("%lld\n",b);
    scanf("%lld",&t);
    while(t--)
    {
        e=1;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        scanf("%lld",&p);
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                c=-1;
                b=a[i]+a[j];
                if(p-b>0)
                {

                    if(p-b<=a[i])
                    c=search(0,i-1,p-b);
                    else if((p-b>a[i])&&(p-b<=a[j]))
                    c=search(i+1,j-1,p-b);
                    else
                    c=search(i+1,j-1,p-b);
                    if(c!=-1)
                    e=0;
                }
            }
        }
        if(e==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
long long int search(long long int first,long long int last,long long int val)
{
    long long int mid;
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
