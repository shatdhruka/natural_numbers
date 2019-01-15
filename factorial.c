#include<stdio.h>
#include<math.h>
int main()
{
    int N,fact=1,x;
    printf("");
    scanf("%d",&N);
    for(x=1;x<=N;x++)
    fact=fact*x;
    printf("%d",fact);
    return 0;
}
