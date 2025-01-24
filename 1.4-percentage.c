#include <stdio.h>


void main()
{   
    int maxScore = 500;
    int userScore = 423;
    float percentage = (float) userScore / maxScore * 100.0;

    printf("The users score is: %.2f \n", percentage);
    
}