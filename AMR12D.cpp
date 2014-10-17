#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int t,i,s1,ans;
    char s[15];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&s);
        s1=strlen(s);
        ans=0;
        for(i=0;i<=s1/2;i++)
        if(s[i]!=s[s1-i-1])
        ans=1;
        if(ans)
        printf("NO\n");
        else
        printf("YES\n");

    }
    return 0;
}
