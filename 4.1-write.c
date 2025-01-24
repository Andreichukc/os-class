#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("hello.txt", "w");

    fprintf(fptr, "Hello, How are you? My name is ... What's your name?");

    fclose(fptr);
}