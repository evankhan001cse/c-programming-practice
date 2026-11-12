#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    double x,y,z;
    x=a*b;
    y=x-(x*10/100);
    z=x-(x*5/100);
    if(x>=1000){
        x=a*b;
        y=x-(x*10/100);
        printf("Total = %.2lf\n",x);
        printf("Payable = %.2lf\n",y);
    }
    else if(x>=500){
        x=a*b;
        z=x-(x*5/100);
        printf("Total = %.2lf\n",x);
        printf("Payable = %.2lf\n",z);
    }
    else{
        x=a*b;
        printf("Total = %.2lf\n",x);
        printf("Payable = %.2lf\n",x);
    }
    return 0;
}
