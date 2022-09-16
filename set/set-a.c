#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n = 0;
    int m = 0;

    printf("n: ");
    scanf("%d", &n);
    printf("m: ");
    scanf("%d", &m);

    int a[n];
    int b[m];

    printf("a[]: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("b[]: ");
    for (int i = 0; i < m; i++)
    {
        int v = 0;
        scanf("%d", &b[i]);
    }

    int *c = malloc((m + n) * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    int k = n;

    for (int i = 0; i < m; i++)
    {
        int j;
        for (j = 0; j < n; j++)
            if (a[j] == b[i]) break;
        if (j == n){
            c[k] = b[i];
            k++;
        }
    }


    printf("cn:\t%d\n", k); 

    printf("c[]:\t");
    for (int i = 0; i < k; i++)
    {
        printf("%d", c[i]);
        if (i < k - 1) putchar(' ');
    }
    printf("\n");

    free(c);
    return 0;
}