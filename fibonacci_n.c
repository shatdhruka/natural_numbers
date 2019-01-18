#include <stdio.h>
void main()
{
    int f1 = 0, f2 = 1, f3, num, count = 0;
    printf("\n");
    scanf("%d", &num);
    printf("", num);
    printf("%d\n", f1);
    printf("%d\n", f2);
    count = 2;
    while (count < num)
    {
        f3 = f1 + f2;
        count++;
        printf("%d\n", f3);
        f1 = f2;
        f2 = f3;
   }
}
