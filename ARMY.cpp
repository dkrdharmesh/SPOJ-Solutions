#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
    int t,y,z,c,d,i;

    scanf("%d",&t);
    while(t--)
    {
        printf("\n");
        scanf("%d%d",&y,&z);
        int a[y];int b[z];

        for(i=0;i<y;i++)
        scanf("%d",&a[i]);
        for(i=0;i<z;i++)
        scanf("%d",&b[i]);

        sort(a,a+y);
        sort(b,b+z);
        c=0;d=0;
        while(1)
        {
            if(c==y)
            {
                printf("MechaGodzilla\n");
                break;
            }
            else if(d==z)
            {
                printf("Godzilla\n");
                break;
            }
            if(a[c]<b[d])
            {
                c++;
            }
            else if(a[c]>=b[d])
            {
                d++;
            }

        }
    }
    return(0);
}
