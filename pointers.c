#include <stdio.h>
void main()
{
    int integer = 1;
    int* ptr1 = &integer;
    double dub = 2;
    double* ptr2 = &dub;
    char character = 'a';
    char* ptr3 = &character;

    printf("%d \n", integer);
    printf("%p \n", ptr1);
    printf("%zu \n", sizeof(integer));

    printf("%f \n", dub);
    printf("%p \n", ptr2);
    printf("%zu \n", sizeof(dub));

    printf("%c \n", character);
    printf("%p \n", ptr3);
    printf("%zu \n", sizeof(character));

} 