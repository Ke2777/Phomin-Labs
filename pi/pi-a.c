#include <stdio.h>
#include <stdlib.h> // rand()
#include <math.h>
#include <time.h>

float lerf(float a, float b, float t) // Linear interpolation
{
    return a + (b - a) * t;
} 

int main()
{

    int n; 
    float y = acosf(-1);

    printf("n: ");
    scanf("%d", &n);
    
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

    printf("y:\t%.5f\n", y);
    printf("s:\t%.5f\n", s);
    printf("m:\t%d\n", k);


}