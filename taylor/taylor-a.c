#include <stdint.h>
#include <stdio.h>
#include <math.h>

int x;
int n; 

float e(float z)
{
    return fabsf(z);
}

float s(float y)
{
    float sum = 0;
    for (float i = 0; i < n; i++)
    {
        sum = sum + (powf(-1, i) * powf((x - 1), i));
    }
    return sum;
}

float y(float x)
{
    return 1/x;
}

int main()
{
    // input x
    printf("x: ");
    scanf("%f", &x);

    // input n
    printf("n: ");
    scanf("%d", &n);

    // output y, s, e
    printf("y:\t%.5f\n", y(x));
    printf("s:\t%.5f\n", s(y(x)));
    printf("e:\t%.5f\n", e(y(x) - s(y(x))));

}