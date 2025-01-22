#include <stdio.h>

void getArea(int radius){
    double area = 3.14*(radius*radius);
    printf("%f \n", area);
}

int main()
{
    int radius = 5;
    getArea(radius);
    
    
    return 0;
}