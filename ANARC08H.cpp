#include<stdio.h>

using namespace std;

int main()
{
    int n,d,w,ans,temp,cl,i,c,r;
    scanf("%d%d",&n,&d);
    while((n!=0)&&(d!=0))
    {
        if(n==0)
        {
            printf("%d %d 0\n",n,d,0);
            scanf("%d%d",&n,&d);
            continue;
        }
        r=0;
        i=1;
    while(i <= n)
      {
          r=(r+d)%i;
          printf("%d\n",r);
          i+=1;
      }
    printf("%d %d %d\n",n,d,r+1);
        scanf("%d%d",&n,&d);
    }
    return(0);

}
