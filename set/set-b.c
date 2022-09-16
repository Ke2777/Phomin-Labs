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

    if (n > 0){
        printf("a[]: ");
        for (int i = 0; i < n; i++)
             scanf("%d", &a[i]);
    }
    
    if (m > 0){
        printf("b[]: ");
        for (int i = 0; i < m; i++){
            int v = 0;
             scanf("%d", &b[i]);
        }
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

    //d
    k = 0;
    int *d = malloc((m + n) * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n; j++) 
            if (b[j] == c[i]) break;

        if (m > 0) {
            if (j == n ) {
                d[k] = a[i];
                k++;
            }
        }
        else {
            d[k] = a[i];
            k++;           
        }
    }
    printf("dn:\t%d\n", k);
    if (k > 0) {
        printf("d[]:\t");
        for (int i = 0; i < k; i++){
            printf("%d", d[i]);
            if (i < k - 1) putchar(' ');
        }
        printf("\n");
    }
    else {
	    printf("d[]:\tempty\n"); 
    }
    free(c);
    free(d);
    return 0;
}
