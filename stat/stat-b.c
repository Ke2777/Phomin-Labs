#include <stdlib.h>
#include <stdio.h>
#include <math.h> // powf(), sqrt()

#define true 1
#define LIM 15

int n = 0;
int a[LIM];

int main()
{
    printf("a[]: ");

    int i = 0;
    while (true){
        int v;
        if (scanf("%d", &v) != 1) break; // stop input
        if (i == LIM){
            puts("overflow");
            exit(EXIT_SUCCESS);
        }
        a[i] = v;
        i ++;
    }

    n = i;
    printf("num:\t%d\n", n);

    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    
    float avg = s / (float) n;
    printf("mean:\t%.2f\n", avg);

    // Нахождение стандартного отклонения
    float stddev = 0.0f;
    for (int i = 0; i < n; i++){
        float d = a[i] - avg;
        stddev += d * d;  
    }
    stddev = sqrtf((1.0f / (n - 1)) * stddev);  
    printf("stddev:\t%.2f\n", stddev);

	return 0;
}