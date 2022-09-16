#include <stdint.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float x, n;
    float sum;
    float s;
    float fact = 1.0f;

    // input x
    printf("x: ");
    scanf("%f", &x);

    // input n
    printf("n: ");
    scanf("%f", &n);

    float y = expf(x);
    for (int i = 0; i < n; i++)
    {
        if (i > 1)
        {
            // ramanujan's approximation
            fact = sqrtf(2 * acosf(-1) * i) * powf(i / expf(1), i) * powf(1 + (float)1/(2 * i) + (float)1/(8 * powf(i, 2)), (float)1/6);
        }
        sum = powf(x, i) / fact;
        s = s + sum;
        printf("s: %f\t", s);
        printf("e: %f\n", fabsf((y - s)));
    }
    float e = fabsf((y - s));

    // output y, s, e
    printf("y:\t%.5f\n", y);
    printf("s:\t%.5f\n", s);
    printf("e:\t%.5f\n", e);

   return 0;

}