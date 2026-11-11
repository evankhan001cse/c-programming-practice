#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    double division = (double) A / B;
    int f = floor(division);
    int c = ceil(division);
    int r = round(division);

    printf("floor %d / %d = %d\n", A, B, f);
    printf("ceil %d / %d = %d\n", A, B, c);
    printf("round %d / %d = %d\n", A, B, r);

    return 0;
}
