#include<stdio.h>
int main(){
 int a,b,c,mx,mn;
 scanf("%d%d%d",&a,&b,&c);
 mx=a;
 if(b>mx) mx=b;
 if(c>mx) mx=c;
 mn=a;
 if(b<mn) mn=b;
 if(c<mn) mn=c;
 printf("%d %d",mn,mx);
 return 0;
}
