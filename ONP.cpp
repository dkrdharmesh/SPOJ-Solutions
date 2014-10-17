#include <iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
    int test;
    scanf("%d",&test);
    while(test>0)
    {
        string a,c;
       cin>>a;
       int t=-1;
       //b[temp++]=a[0];
      for(int i=0;a[i]!='\0';i++)
      {
        if(a[i]=='(')
            continue;
        else if(a[i]>='a'&&a[i]<='z')
            cout<<a[i];
        else if(a[i]==')')
            cout<<c[t--];
        else c[++t]= a[i];

      }

      cout<<"\n";
      test--;
    }
    return 0;
}
