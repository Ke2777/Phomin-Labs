#include <stdlib.h>
#include <stdio.h>

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

	return 0;
}