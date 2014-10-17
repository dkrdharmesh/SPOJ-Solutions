#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct data
{
    int val;
    struct data *next;
};
int main()
{
    int t,i,j,n,in,y,z,front,back,ans;
    int b[2005];
    int q[2005];
    int c[2005];
    struct data *a[2005];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        ans=0;
        scanf("%d%d",&n,&in);
        for(j=1;j<=n;j++)
        {
            a[j]=NULL;
            b[j]=-1;
            c[j]=-1;
        }
        for(j=1;j<=in;j++)
        {
            scanf("%d%d",&y,&z);
            struct data *temp,*temp1;
            temp=(struct data *)malloc(sizeof(struct data));
            temp->val=z;
            temp->next=a[y];
            a[y]=temp;


            temp1=(struct data *)malloc(sizeof(struct data));
            temp1->val=y;
            temp1->next=a[z];
            a[z]=temp1;
        }
        /*for(j=1;j<=n;j++)
        {
            struct data *head;
            head=a[j];
            printf("list for node=%d\n",j);
            while(head!=NULL)
            {
                printf("%d\n",head->val);
                head=head->next;
            }
            printf("\n");
        }*/
        for(j=1;j<=n;j++)
        {
        if(c[j]==-1)
        {
            c[j]=1;
            front=back=-1;
            back++;
        q[back]=j;
        b[j]=1;
        while(front<back)
        {
            front++;
            y=q[front];
            struct data *head;
            head=a[y];
            while(head!=NULL)
            {
                z=head->val;
                if(b[z]==-1)
                {
                    b[z]=1-b[y];
                    back++;
                    q[back]=z;
                    c[z]=1;
                }
                else if(b[z]==b[y])
                {
             //       printf("y=%d z=%d\n",y,z);
                    ans=1;
                }
                head=head->next;
            }

        }
        }
        }

        printf("Scenario #%d:\n",i);
        if(ans==0)
        printf("No suspicious bugs found!\n");
        else
        printf("Suspicious bugs found!\n");

    }
    return 0;
}
