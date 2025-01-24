#include <stdio.h>
void main()
{
    int myNum;
	printf("enter the number: \n");
    scanf("%d", &myNum);
    if(myNum % 2 == 0){
        printf("even \n");
    }else{
        printf("odd \n");
    }
}
