#include <stdio.h>
void main()
{
    int myNum;
	printf("enter the number: \n");
    scanf("%d", &myNum);
    if(myNum > 0){
        printf("positive \n");
    }else if(myNum < 0){
        printf("negative \n");
    }else{
        printf("zero \n");
    }
}
