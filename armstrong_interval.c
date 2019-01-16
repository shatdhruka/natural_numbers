#include<stdio.h>
int main()
{
    int N,sum,cube,N1,N2,num,i;
    scanf("%d",&N1);
    printf("");
    scanf("%d",&N2);
    printf("");
    for(i=N1;i<=N2;i++)
    {
    sum=0;
    num=i;
    do
        {
        N=num%10;
        num=num/10;
        cube=N*N*N;;
        sum=sum+cube;
        }
    while(num>0);
    if(sum==i)
        {
        printf("\t%d",i);
        }
    }
    return 0;
}
