#include <stdio.h>
int main()
{
    int a, n, d;
    int sum;
    printf(" ");
    scanf("%d", &n);
    printf(" ");
    scanf("%d", &a);
    printf(" ");
    scanf("%d", &d);
    sum = n*((2 * a )+((n - 1) * d))/2;
    printf("\n%d",sum);
    return 0;
}
