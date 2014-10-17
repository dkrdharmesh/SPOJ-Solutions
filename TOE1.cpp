#include<stdio.h>

using namespace std;

int main()
{
    char c;
    int n,i,j,cx,co,wx,wo,t,k;
    scanf("%d",&n);
    //c=getchar();
    for(k=1;k<=n;k++)
    {
        char a[3][4];
        for(i=0;i<3;i++)
        {


            scanf("%s",&a[i]);
            //getchar();
        }
        //if(k!=n)
        //getchar();
        cx=co=wx=wo=t=0;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(a[i][j]=='X')
                cx++;
                if(a[i][j]=='O')
                co++;
            }
            if((a[i][0]=='X')&&(a[i][1]=='X')&&(a[i][2]=='X'))
            wx++;
            if((a[i][0]=='O')&&(a[i][1]=='O')&&(a[i][2]=='O'))
            wo++;

            if((a[0][i]=='X')&&(a[1][i]=='X')&&(a[2][i]=='X'))
            wx++;
            if((a[0][i]=='O')&&(a[1][i]=='O')&&(a[2][i]=='O'))
            wo++;
        }
        if((a[0][0]=='X')&&(a[1][1]=='X')&&(a[2][2]=='X'))
        wx++;

        if((a[0][0]=='O')&&(a[1][1]=='O')&&(a[2][2]=='O'))
        wo++;

        if((a[0][2]=='X')&&(a[1][1]=='X')&&(a[2][0]=='X'))
        wx++;

        if((a[0][2]=='O')&&(a[1][1]=='O')&&(a[2][0]=='O'))
        wo++;

        /*if(cx<co||cx-co>1)//if((cx!=co)&&(cx!=co+1))
        t=1;

        if((wx>1)||(wo>1))
        t=1;
        if(wx==1)
        {
            if(wo!=0)
            t=1;
            if(cx==co)
            t=1;
        }
        if(wo==1)
        {
            if(wx!=0)
            t=1;
            if(cx>co)
            t=1;
        }
        if((a[0][0]=='X')&&(a[0][2]=='X')&&(a[1][1]=='X')&&(a[2][0]=='X')&&(a[2][2]=='X')&&(co==4))
        t=0;
        if(t==0)
        printf("yes\n");
        else
        printf("no\n");*/

    if(cx<co||cx-co>1)
    {
      printf("no\n");
       t=1;
    }
    if((wx>0)&&(cx==co))
    {
      printf("no\n");
      t=1;
    }
    if((wo>0)&&(cx>co))
    {
      printf("no\n");
      t=1;
    }
    if(t==0)
    printf("yes\n");
    }
    return 0;
}

