#include <stdio.h>

void tempChange(double temp){
    double celcius = (temp - 32) * 5/9;
    printf("%f \n", celcius);
}

int main()
{
    double fahrenheit = 52.5;
    tempChange(52.5);
    
    
    return 0;
}
