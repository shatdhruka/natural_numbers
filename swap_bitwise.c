#include <stdio.h>
#include <string.h>
void swap(int*, int*);
void main()
{
    int n1, n2;
    printf("\n");
    scanf("%d %d", &n1, &n2);
    printf("\n", n1, n2);
    swap(&n1, &n2);
    printf("\n%d %d", n1, n2);
}
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
