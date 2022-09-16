#include <stdint.h>
#include <stdio.h>
#include <math.h>

#define true 1

int main()
{
    float x, n;
    float sum;
    int i = 0; // counter

    // input x
    printf("x: ");
    scanf("%f", &x);

    // input n
    printf("e: ");
    scanf("%f", &n);

    float y = expf(x);
    float s;
    float e;

    if (n == 0.0001f)
    {
        printf("unreachable\n");
    }

    float fact = 1.0f; // factorial
    while (true)
    {
        if (fabs((y - s)) <= n || i >= 19)
        {
            break;
        }
        else
        {
            if (i > 1)
            {
                fact = sqrtf(2 * acosf(-1) * i) * powf(i / expf(1), i) * powf(1 + (float)1/(2 * i) + (float)1/(8 * powf(i, 2)), (float)1/6);
            }
            sum = powf(x, i) / fact;
            s = s + sum;  
        }
        i++;            
    }
    e = fabs((y - s));

    // output y, s, e
    printf("y:\t%.5f\n", y);
    printf("s:\t%.5f\n", s);
    printf("e:\t%.5f\n", e);
    printf("n:\t%d\n", i);

}