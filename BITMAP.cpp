#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int q[40000][2];
    int b[200][200];
    char a[200][200];
    int ans[200][200];
int main()
{
    int t,n,m,i,j,k,l,front,back,y,z,y1,z1;
    scanf("%d",&t);
    int dr[4];int dc[4];
    dr[0]=-1;dr[1]=0;dr[2]=1;dr[3]=0;
    dc[0]=0;dc[1]=-1;dc[2]=0;dc[3]=1;

    while(t--)
    {
        scanf("%d%d",&n,&m);
        getchar();
        for(k=0;k<=n;k++)
        {
            for(l=0;l<=m;l++)
          {
            b[k][l]=0;
            //ans[k][l]=0;
          }
        }
        front=back=-1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {

               scanf("%c",&a[i][j]);
               if(a[i][j]=='1')
               {
                   b[i][j]=1;
                   ans[i][j]=0;
                   back++;
                   q[back][0]=i;
                   q[back][1]=j;
               }
            }
            getchar();
        }


                while(front<back)
                {
                    front++;
                    y=q[front][0];
                    z=q[front][1];
                    //b[y][z]=1;
                    for(k=0;k<4;k++)
                    {
                        y1=y+dr[k];
                        z1=z+dc[k];
                        if((y1>=0)&&(y1<n)&&(z1>=0)&&(z1<m)&&(b[y1][z1]==0))
                        {
                            b[y1][z1]=1;
                            ans[y1][z1]=ans[y][z]+1;
                            back++;
                            q[back][0]=y1;
                            q[back][1]=z1;
                        }
                    }

                }
                for(int i=0;i<n;i++){
               for(int j=0;j<m;j++){
                printf("%d",ans[i][j]);
                if(j==m-1) printf("\n");
                else printf(" ");
            }
        }

            }

    return 0;
}
