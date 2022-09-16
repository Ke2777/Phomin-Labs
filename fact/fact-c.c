#include <stdint.h>
#include <stdio.h>
#include <math.h>

float y_1, y2;
float pi = 3.1415926535;
float e = 2.7182818284; 

float f2(int x)
{
    if (x == 0)
    {
        return 1;
    }
    return sqrtf(2 * pi * x) * powf(x / e, x) * pow(1 + 1 / (2.0f * x) + 1 / (8.0f * x * x), (1.0f / 6.0f));
}

float f1(int x)
{ 
    if (x == 0)
    {
        return 1;
    }
    return sqrtf(2 * pi * x) * powf((x / e), x);
}

int f(int x)
{
    int result = 1;

    if (x == 0)
    {
        return 1;
    }
    else if (x > 0)
    {
        for (int i = 1; i <= x; i++)
        {
            result *= i;
        }
        return result;
    }
}

int main()
{
    int x, y;

    printf("x: ");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("error\n");
    }

    else 
    {
        printf("x\tf(x)\tf1(x)\tf2(x)\n");
        for (int i = 0; i <= x; i++)
        {
            y = f(i);
            y_1 = f1(i);
            y2 = f2(i);
            printf("%d\t%d\t%.3f\t%.3f\n", i, y, y_1, y2);
        }
    }
}