#include <stdint.h>
#include <stdio.h>
#include <math.h>

float x_0, y_0, r;
float x, y;

int main()
{
    printf("x0, y0: "); 
    scanf("%f %f", &x_0, &y_0);

    printf("r: ");
    scanf("%f", &r);

    printf("x, y: "); // 0.5 0.5
    scanf("%f %f", &x, &y);

    if (pow(x - x_0, 2) + pow(y - y_0, 2) <= pow(r, 2)) // place on circle
    {
        printf("yes\n");
    }

    else
    {
        printf("no\n");
    }
    
    return 0;
}
