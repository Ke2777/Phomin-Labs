#include <stdlib.h>
#include <stdio.h>

int a = 10;
int b = 5;

int main(int argc, char **argv)
{
    printf("a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d, b = %d\n", a, b);

    return EXIT_SUCCESS;
}








