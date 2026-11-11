#include<stdio.h>
int main(){
double a;
scanf("%lf",&a);
int x = (int)a;
double y = a-x;
if(y==0)
{
    printf("int %d\n",x);
}
else
{
    printf("float %d %g\n",x,y);
}
return 0;

}
