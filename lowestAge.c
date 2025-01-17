#include <stdio.h>
void main()
{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);
    int i = 0;
    int lowest = ages[0];

    for(i = 0; i < length; i++){
        if(lowest > ages[i]){
            lowest = ages[i];
        }
    }
    printf("%d \n", lowest);
}