#include <stdint.h>
#include <stdio.h>

int main()
{

    float a, b, c, d;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    d = b * b - 4 * a * c;

    char bs = '+';
    if (b < 0.0f)
    {
        bs = '-';
        b = -b;
    }

    char bc = '+';
    if (c < 0.0f)
    {

        bc = '-';
        c = -c;
    }
    printf("eq:\t%.1f * x ^ 2 %c %.1f * x %c %.1f = 0\n", a, bs, b, bc, c);
    printf("d:\t%.3f\n", d);
    return 0;
}