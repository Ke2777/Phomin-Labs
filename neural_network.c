#include <stdint.h>
#include <stdio.h>

const int b = 1;

float g(float x)
{
    if (x < 0) return 0.0f;
    return 1.0f;
}

int main()
{
    // input
    float x0, x1;
    float w0, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10, w11;
    printf("x0, x1, w0, w1, w2, w3, w4, w5, w6, w7, w8, w9, w10, w11: ");
    scanf("%f %f %f %f %f %f %f %f %f %f %f", &x0, &x1, &w0, &w1, &w2, &w3, &w4, &w5, &w6, &w7, &w8, &w9, &w10, &w11);

    // hiden 
    float g0 = g(w0 * x0 + w1 * x1 + b);
    float g1 = g(w2 * x0 + w3 * x1 + b);
    float g2 = g(w4 * x0 + w5 * x1 + b);

    printf("y0: %f", g0);
    printf("y1: %f", g1);
    printf("y2: %f", g2);

    float g3 = g(w6 * g0 + w7 * g1 + w8 * g2 + b);
    float g4 = g(w9 * g0 + w10 * g1 + w11 * g2 + b);

    // output
    printf("y3: %f", g3);
    printf("y4: %f", g4);
    

}