#include<stdio.h>

using namespace std;

int main()
{
    int t,r,c;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&r,&c);
        if((r%2==0)&&(c>=r))
        printf("L\n");
        else if((r%2==1)&&(c>=r))
        printf("R\n");
        else if(c%2==0)
        printf("U\n");
        else
        printf("D\n");
    }
    return 0;
}
