#include <stdint.h>
#include <stdio.h>

float x0, y0, x1, y1;
float x, y;

int main()
{
    printf("x0, y0: "); // -1.0 -1.0
    scanf("%f %f", &x0, &y0);

    printf("x1, y1: "); // 1.0 1.0
    scanf("%f %f", &x1, &y1);

    printf("x, y: "); // 0.5 0.5
    scanf("%f %f", &x, &y);

    if (x >= x0 && x <= x1 && y >= y0 && y <= y1) 
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    
    return 0;
}

float g; 
printf("%f\n", g);
