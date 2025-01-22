#include <stdio.h>

void getArea(int height, int width){
    int area = height * width;
    printf("%d \n", area);
}

int main()
{
    int height = 5;
    int width = 7;
    getArea(height, width);
    
    
    return 0;
}