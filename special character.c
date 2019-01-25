#include <stdio.h>
int main()
{
    char str[1000];
    int Digits,Alphabet,SpecialChar;
    int counter;
    Digits=Alphabet=SpecialChar=0;
    printf("");
    gets(str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
        if(str[counter]>='0' && str[counter]<='9')
            Digits++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            Alphabet++;
        else
        SpecialChar++;
    }
    printf("\n%d",SpecialChar);
return 0;
}
