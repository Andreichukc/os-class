#include <stdio.h>
void main()
{
    int num[4] = {25, 50, 75, 100};
    
    printf("%d \n", *(num + 1));
    printf("\n");

    int length = sizeof(num) / sizeof(num[0]);

    for(int i = 0; i < length; i++){
       printf("%d \n", *(num + i));
    }
    
} 
