#include <stdio.h>
#include <math.h>
#include "mylib.h"
#include "canvas/virtdisp.h"


float f1(float x)
{
    return cos(x);
}

int main()
{
    int n = 0;
    float x1 = 0.0f;
    float x2 = 0.0f;
    float a = 0.0f;

    printf("n: ");
    scanf("%d", &n);
    printf("x1: ");
    scanf("%f", &x1);
    printf("x2: ");
    scanf("%f", &x2);
    printf("a: ");
    scanf("%f", &a);

    float arr_x1[n];
    float arr_x2[n];

    printf("i\tf1\tf2\n");
    for (int i = 1; i < n; i+=5)
    {
        float x = f1(map(i, 1, n, x1, x2));
        float y = x + noise(a);
        arr_x1[i] = x;
        arr_x2[i] = y;
        printf("%d\t%.3f\t%.3f\n", i, x, y);
    }

    // connection to server for draw
    return 0;
}