#include <stdio.h>
void main()
{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);
    int i = 0;
    float average = 0;

    for(i = 0; i < length; i++){
        average += ages[i];
    }
    average = average / length;
    printf("%f \n", average);
}