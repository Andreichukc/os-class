#include <stdio.h>
void main()
{
    int myNum1 = 0;
    int* ptr1 = &myNum1;
    int myNum2 = 0;
    int* ptr2 = &myNum2;

	printf("type a number: \n");
    scanf("%d", &myNum1);
    printf("type a number: \n");
    scanf("%d", &myNum2);

    printf("your number: %d \n", *ptr1 + *ptr2);
    
} 