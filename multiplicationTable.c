#include <stdio.h>
void main()
{
    int i = 0;
    int x = 0;
	for(i = 1; i <= 10; i++){
        for(x = 1; x <= 10; x++){
            printf("%d ", i*x);
        }
        printf("\n");
    }
    
}