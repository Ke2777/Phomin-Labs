#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "common.h"
#define true 1

float f(float x)
{ 
    return sqrtf(powf(x + 5, 2) + 3) - 10;
}

int main()
{
    float a, b, e;
    float am, ad;
    

    printf("a, ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("e: ");
    scanf("%f", &e);

    int i = 0;
    while (true)
    {
        float c = (a + b) * 0.5f;

        float ya = f(a);
        float yc = f(c);

        if (fabsf(yc) <= e)
        {
            printf("x0: %.5f\n", c);
            printf("y0: %.5f\n", yc);
            printf("n: %d\n", i + 1);
            break;
        }

        if (f(a) == f(b)) 
        {
            printf("multiple roots\n");
            break; 
        }

        if (ya * yc <= 0.0f) b = c;
        else a = c;

        i++;
    }
    return 0;
}