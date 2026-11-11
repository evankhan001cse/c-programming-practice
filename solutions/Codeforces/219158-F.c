#include <stdio.h>

int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);

    long long x = n % 10;
    long long y = m % 10;
    long long sum = x + y;
    printf("%lld\n", sum);

    return 0;
}
