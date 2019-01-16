#include<stdio.h>
int main()
{
    int j,N1,N2,flag,i;
    scanf("%d",&N1);
    printf("");
    scanf("%d",&N2);
    printf("");
    for(i=N1+1; i<N2; ++i)
    {
      flag=0;
      for(j=2; j<=i/2; ++j)
      {
        if(i%j==0)
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
        printf("%d ",i);
    }
  return 0;
}
