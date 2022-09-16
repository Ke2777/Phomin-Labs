#include <stdlib.h>
#include <stdio.h>
#include <math.h> // powf(), sqrtf()

#define true 1
#define LIM 15

int a[LIM];
int b[LIM];


int main()
{
    // input a
    int n = 0;
    printf("a[]: ");
    while (true){
        int v;
        if (scanf("%d", &v) != 1) break;
        if (n == LIM){
            puts("overflow a");
            return 0;
        }
        a[n] = v;
        n++;
    }

    // clear input buffer
    int c;
    while ( (c = getchar()) != '\n' && c != EOF ) { }

    // input b
    int j = 0;
    printf("b[]: ");
    while (true){
        char k;
        if (scanf("%d", &k) != 1) break; // stop input
        if (j == LIM){
            puts("overflow b");
            return 0;
        }
        b[j] = (int) k;
        j ++;
    }  

    printf("num_a:\t%d\n", n);
    printf("num_b:\t%d\n", j);

    if (n != j) 
    {
        printf("mismatch\n");
        return 0;
    }

    // sad 
    int sad = 0;
    for (int i = 0; i < n; i++)
    {
        sad += abs(a[i] - b[i]);
    }
    printf("sad:\t%d\n", sad);

    // mean squared error
    float mse = 0.0f;
    for (int i = 0; i < n; i++)
    {
        mse += powf((a[i] - b[i]), 2);
    }
    float msee = mse / n;
    printf("mse:\t%.2f\n", msee);

    // root mean squared error
    float rmse = 0.0f;
    rmse = sqrtf(mse / n);
    printf("rmse:\t%.2f\n", rmse);

	return 0;
}