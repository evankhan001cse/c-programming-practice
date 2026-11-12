#include<stdio.h>
int main(){
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    if (a>b)
    {
       printf("Larger = %lld\n",a);
       printf("Smaller = %lld\n",b);
    }
    else if (a==b)
    {
       printf("Equal = %lld\n",a);

    }
    else
    {
        printf("Larger = %lld\n",b);
        printf("Smaller = %lld\n",a);
    }
    return 0;

}
