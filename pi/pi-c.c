#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "common.h"

#define true 1

int main()
{

    float p; 
    float r, x0, y0;
    float y = acosf(-1);

    printf("p: ");
    scanf("%f", &p);

    printf("x0, y0: ");
    scanf("%f %f", &x0, &y0);

    printf("r: ");
    scanf("%f", &r);
    
    float m;
    float s;
    int n = 1;
    while (true)
    { 
        if (fabs(y - s) <= p)
        {
            break;
        }
        else
        {
            float x = lerf(-1.0f, 1.0f, rand() / (float)RAND_MAX);
            float y = lerf(-1.0f, 1.0f, rand() / (float)RAND_MAX);
            if ((x * x) + (y * y) <= 1.0f)
            {
                m += 1;
            }
            s = 4 * m / n;
            n += 1;
        }
    }
    int k = m;
    float a = 2 * r; // сторона квадрата
    float ss = a * a; // площадь квадрата
    float sc = y * pow((a / 2), 2); // площадь вписанной окружности
    float e = fabs(y - s); // точность

    printf("y:\t%.5f\n", y);
    printf("s:\t%.5f\n", s);
    printf("n:\t%d\n", n - 1); // Отнимаем еденицу, т.к итерация начинается всегда с 0
    printf("m:\t%d\n", k);
    printf("a:\t%.3f\n", a);
    printf("ss:\t%.3f\n", ss);
    printf("sc:\t%.3f\n", sc);
    printf("e:\t%.5f\n", e);


}