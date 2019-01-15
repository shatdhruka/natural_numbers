#include<stdio.h>
#include<math.h>
int main()
{
    int N,flag=1,i;
    printf("");
    scanf("%d",&N);
    for(i=2;i<=N/2;++i)
    {
        if(N%i==0)
        flag=0;
        break;
    }
    if(flag==1)
    {
    printf("\nyes",N);
    }
    else
    printf("\nno",N);
    return 0;
}
