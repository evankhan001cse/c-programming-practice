#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   if(a>0)
   {
       printf("POSITIVE\n");
   }
   else if(a<0)
   {
       printf("NEGATIVE\n");
   }
   else
   {
       printf("ZERO\n");
   }
return 0;
}
