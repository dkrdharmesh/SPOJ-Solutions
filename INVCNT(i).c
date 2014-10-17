/*Application of merge sort*/

#include<stdio.h>

long long int ans=0;
void mergesort(int [],int,int);
void merge(int [],int,int,int);
int main()
{
    int i,j,n,temp,t;
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        mergesort(a,0,n-1);

        //for(i=0;i<n;i++)
        printf("%lld\n",ans);
    }
    return(0);
}
void mergesort(int a[],int i,int j)
{
    int k,mid;
    if(i>=j)
    return;
    mid=(i+j)/2;
    mergesort(a,i,mid);
    mergesort(a,mid+1,j);
    merge(a,i,j,(j-1)+1);
}
void merge(int a[],int i,int j,int n)
{
    int k,b[n],mid,l,start;

    start=i;
    mid=(i+j)/2;
    k=mid+1;
    l=i;
    while((i<=mid)&&(k<=j))
    if(a[i]>a[k])
     {
         ans+=((j-k)+1);
         b[l++]=a[i++];
     }
    else
    b[l++]=a[k++];


    if(i>mid)
    for(;k<=j;)
    b[l++]=a[k++];
    else
    if(k>j)
    for(;i<=mid;)
    b[l++]=a[i++];

    for(l=start;l<=j;l++)
    a[l]=b[l];
}

