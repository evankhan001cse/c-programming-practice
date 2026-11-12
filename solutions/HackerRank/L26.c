#include<stdio.h>

int main()
{
    int n, x;
    long long total = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        total = total * 10 + x; 
    }

    printf("%lld\n", total * total);

    return 0;
}
