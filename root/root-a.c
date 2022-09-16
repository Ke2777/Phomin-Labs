#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "common.h"

float f(float x)
{ 
    return sqrtf(powf(x + 5, 2) + 3) - 10;
}

int main()
{
    float a = 0.0f;
    float b = 0.0f;
    int n = 0;

    printf("a, ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("n: ");
    scanf("%d", &n);

    float x0 = a;
    float y0 = f(a);
    for (int i = 0; i <= n; i++)
    {
        float x = map(i, 1, n, a, b); 
        float y = f(x);
        if (fabsf(y) < fabsf(y0))
        {
            y0 = y;
            x0 = x;
        }
    }

    printf("x0: %.5f\n", x0);
    printf("y0: %.5f\n", y0);

    return 0;
}