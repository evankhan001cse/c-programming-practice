#include <stdio.h>

int main()
{
    long long int a,result=1;
    int b;
    scanf("%lld %d", &a,&b);

    for(int i=1;i<=b; i++)
    {
        result = result*a;
    }

 printf("%lld", result);

    return 0;
}
