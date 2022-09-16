#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "common.h"

int main()
{

    int n; 
    float r, x0, y0;
    float y = acosf(-1);

    printf("n: ");
    scanf("%d", &n);

    printf("x0, y0: ");
    scanf("%f %f", &x0, &y0);

    printf("r: ");
    scanf("%f", &r);
    
    float m;
    for (int i = 0; i < n; i++)
    {   
        float x = lerf(-1.0f, 1.0f, rand() / (float)RAND_MAX);
        float y = lerf(-1.0f, 1.0f, rand() / (float)RAND_MAX);
        if ((x * x) + (y * y) <= 1.0f)
        {
            m += 1;
        }
    }

    float s = 4 * m / n;
    int k = m;
    float a = 2 * r;
    float ss = a * a;
    float sc = y * pow((a / 2), 2);
    float e = fabs(y - s);

    printf("y:\t%.5f\n", y);
    printf("s:\t%.5f\n", s);
    printf("m:\t%d\n", k);
    printf("a:\t%.3f\n", a);
    printf("ss:\t%.3f\n", ss);
    printf("sc:\t%.3f\n", sc);
    printf("e:\t%.5f\n", e);


}