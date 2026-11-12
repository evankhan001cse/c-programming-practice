#include<stdio.h>
int main(){
   int h1,w1,h2,w2;
   scanf("%d%d%d%d",&h1,&w1,&h2,&w2);
   if((h1*w1)>(h2*w2))
   {
       printf("FIRST\n");
       printf("Area = %d\n",h1*w1);
   }
   else if((h1*w1)<(h2*w2))
   {
       printf("SECOND\n");
       printf("Area = %d\n",h2*w2);
   }
   else
   {
       printf("EQUAL\n");
       printf("Area = %d\n",h2*w2);
   }
    return 0;
}
