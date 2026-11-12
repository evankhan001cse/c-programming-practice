#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   if(a%4==0 && a%100!=0 && a%400!=0)
   {
       printf("LEAP\n");
   }
   else if(a%4==0 && a%100==0 && a%400==0)
   {
       printf("LEAP\n");
   }
    else if(a%4==0 && a%100==0 || a%400==0)
   {
       printf("NOT LEAP\n");
   }

   else
   {
       printf("NOT LEAP\n");
   }
    return 0;
}
