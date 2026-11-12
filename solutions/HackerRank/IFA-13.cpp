#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    double x;
    x=(a+b+c+d)/4.0;
    printf("Average = %.2lf\n",x);
    
    if(x>=90){
        
        printf("Grade = A\n");
    }
    else if(x>=80){
       
        printf("Grade = B\n");
    }
     else if(x>=70){

       
        printf("Grade = C\n");
     }
     else if(x>=60){

            printf("Grade = D\n");
     }
    else{

        printf("Grade = F\n");

    }
    return 0;
}
