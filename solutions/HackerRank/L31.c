#include <stdio.h>

int main() {
  int n,total=0;
  scanf("%d",&n);
  printf("%d ",n);

  for(int i=n;i!=1;i=total){
        if(i%2==0){
           total=i/2;

    printf("%d ",total);
       }
        if(i%2!=0){
            total=3*i+1;
         printf("%d ",total);
       }
  }
    return 0;
}
