#include<stdio.h>
void main()
{

    char str[1000];
    int i,count=1;
    printf("\n");
    gets(str);
        for(i=0;str[i];i++)
            if(str[i] == '.')
                count++;
            printf("\n %d",count);
    
}
