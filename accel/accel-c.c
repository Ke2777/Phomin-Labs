#include <stdlib.h>
#include <stdio.h>

float x0, y0, v0x, v0y, ax, ay;
float t;

int main()
{
    printf("x0, y0: ");
    scanf("%f %f", &x0, &y0);

    printf("v0x, v0y: ");
    scanf("%f %f", &v0x, &v0y);

    printf("ax, ay: ");
    scanf("%f %f", &ax, &ay);

    printf("t: ");
    scanf("%f", &t);

    float x = x0 + v0x * t + (ax * t * t / 2.0f);
    printf("x: %.3f\n", x);

    float y = y0 + v0y * t + (ay * t * t / 2.0f);
    printf("y: %.3f\n", y);

    return EXIT_SUCCESS;
}
