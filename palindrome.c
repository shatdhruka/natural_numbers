#include<stdio.h>
#include<math.h>
int main()
{
    int N,reverse=0,remainder,X;
    printf("");
    scanf("%d", &N);
    X=N;
    while(N!=0)
    {
        remainder=N%10;
        reverse=reverse*10+remainder;
        N=N/10;
    }
    if(X==reverse){
    printf("yes",X);}
    else
    printf("No",X);
    
    return 0;
}
