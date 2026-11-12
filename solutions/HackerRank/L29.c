#include<stdio.h>

int main()
{
    int n;
    long long int sum = 0;
    long long int term = 9;

    scanf("%d", &n);

       for(int i=1;i<=n;i++){

        sum += term;

        term = term * 10 + 9;

       }
       printf("%lld\n", sum);

    return 0;
}
