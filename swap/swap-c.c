#include <stdlib.h>
#include <stdio.h>

int a;
int b;

int main(int argc, char **argv)
{
    scanf("%d", &a);
    scanf("%d", &b);

    printf("a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a = %d, b = %d\n", a, b);

   return EXIT_SUCCESS;
}



