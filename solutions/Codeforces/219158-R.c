#include<stdio.h>
int main(){
   int y,m,d,age;
   scanf("%d",&age);
   y=age/365;
   age=age%365;
   m=age/30;
   age=age%30;
   d=age;
   printf("%d years\n",y);
   printf("%d months\n",m);
   printf("%d days\n",d);
   return 0;
}
