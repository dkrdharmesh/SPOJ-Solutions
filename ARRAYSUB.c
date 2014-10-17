/*Maximum element in window problem*/
#include<stdio.h>

void perup(int [],int [],int,int);
int main()
{
    //printf("enter no of elements in the array\n");
    int n,i,b,c,front,back,k;
    scanf("%d",&n);
    //printf("enter the nos\n");
    int a[n];int queue[n+5];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        queue[i]=-1;
    }
    //printf("enter the size of the window k : \n");
    scanf("%d",&k);
    back=-1;front=0;
    for(i=0;i<k;i++)
    {
        while((front<=back)&&(a[i]>=a[queue[back]]))
        {
            queue[back]=-1;
            back--;
        }
        back++;
        queue[back]=i;
        //perup(a,queue,front,back);
    }
    for(i=k;i<n;i++)
    {
        printf("%d ",a[queue[front]]);
        while((front<=back)&&(queue[front]<=(i-k)))
        {
            queue[front]=-1;
            front++;
            //heapify(a,queue,front,back);
        }
        while((front<=back)&&(a[i]>=a[queue[back]]))
        {
            queue[back]=-1;
            back--;
        }
        back++;
        queue[back]=i;
        //perup(a,queue,front,back);
    }
    printf("%d ",a[queue[front]]);
    return 0;
}
void perup(int a[],int queue[],int front,int back)
{
    int c=queue[back];
    int i=back;int temp;
    while((i>front)&&(a[queue[(i-1)/2]]<a[queue[i]]))
    {
        queue[i]=queue[(i-1)/2];
        i=(i-1)/2;
    }
    queue[i]=c;
}
