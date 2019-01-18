#include <stdio.h> 
int main() 
{ 
    int x, y; 
    printf(" "); 
    scanf("%d", &x); 
    printf("\n "); 
    scanf("%d", &y); 
    int temp = x; 
    x = y; 
    y = temp; 
    printf(" %d\t%d", x, y); 
    return 0; 
} 
