#include<stdio.h>
int main()
{
    int sum,N1,N2,num,i;
    scanf("%d",&N1);
    printf("");
    scanf("%d",&N2);
    printf("");
    for(i=N1;i<=N2;i++)
    {
    if(i%2==0)
        printf("\t%d",i);
    }
    return 0;
}
