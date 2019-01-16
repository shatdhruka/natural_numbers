#include<stdio.h>
int main()
{
    int N,sum=0,rem=0,temp,cube=0;
    scanf("%d",&N);
    printf("");
    temp=N;
    while(N!=0)
    {
    rem=N%10;
    cube=pow(rem,3);
    sum=sum+cube;
    N=N/10;
        
    }
    if(sum==temp)
    {
        printf("yes");
    }
    else
        printf("no");
    return 0;
}
