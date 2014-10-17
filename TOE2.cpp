#include<stdio.h>

using namespace std;

int main()
{
    char a[3][4];
    char zz[20];
    char c;
    int n,i,j,cx,co,wx,wo,t,k,d;
    scanf("%d",&n);
    //c=getchar();
    gets(zz);
    while(zz[0]!='e')
    {
        //scanf("%c%c%c%c%c%c%c%c%c",&a[0][0],&a[0][1],&a[0][2],&a[1][0],&a[1][1],&a[1][2],&a[2][0],&a[2][1],&a[2][2]);
        //if(k!=n)
        //getchar();
        a[0][0]=zz[0];
        a[0][1]=zz[1];
        a[0][2]=zz[2];
        a[1][0]=zz[3];a[1][1]=zz[4];a[1][2]=zz[5];
        a[2][0]=zz[6];a[2][1]=zz[7];a[2][2]=zz[8];
        cx=co=wx=wo=t=0;d=0;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(a[i][j]=='X')
                cx++;
                else if(a[i][j]=='O')
                co++;
                else
                d++;
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

        //if(cx<co||cx-co>1)
        /*if((cx!=co)&&(cx!=co+1))
        t=1;

        if((wx>1)||(wo>1))
        t=1;*/

        /*if(wx==1)
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
    //printf("t=%d\n",t);
    if(cx<co||cx-co>1)
    {
      printf("invalid\n");
       t=1;
    }
    else if((wx>0)&&(cx==co))
    {
      printf("invalid\n");
      t=1;
    }
    else if((wo>0)&&(cx>co))
    {
      printf("invalid\n");
      t=1;
    }
    else
    {
        if((d>0)&&(wx==0)&&(wo==0))
        {
            printf("invalid\n");
            t=1;

        }
    }
    //printf("t=%d\n",t);
    if(t==0)
    printf("valid\n");

    gets(zz);
    }
    return 0;
}
