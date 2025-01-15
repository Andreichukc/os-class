#include <stdio.h>
void main()
{
    int myNum;
	printf("enter the temperature: \n");
    scanf("%d", &myNum);
    printf("between 70 and 85 (1: true, 0: false): %d \n", myNum > 70 && myNum < 85);
}