#include <stdlib.h>
#include <stdio.h>

float x0, v0x, ax;
float t;

int main()
{
    printf("x0: ");
    scanf("%f", &x0);

    printf("v0x: ");
    scanf("%f", &v0x);

    printf("ax: ");
    scanf("%f", &ax);

    printf("t: ");
    scanf("%f", &t);

    float x = x0 + v0x * t + (ax * t * t / 2.0f);
    printf("x: %.3f\n", x);

    return EXIT_SUCCESS;

}



