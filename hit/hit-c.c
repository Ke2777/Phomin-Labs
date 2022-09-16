#include <stdint.h>
#include <stdio.h>
#include <math.h>

float x_0, y_0, z_0;
float x, y, z;
float r;

int main()
{
    printf("x0, y0, z0: ");
    scanf("%f %f %f", &x_0, &y_0, &z_0);

    printf("r: ");
    scanf("%f", &r);

    printf("x, y, z: ");
    scanf("%f %f %f", &x, &y, &z);

    if (pow(x - x_0, 2) + pow(y - y_0, 2) + pow(z - z_0, 2) <= pow(r, 2)) 
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    
    return 0;
}
