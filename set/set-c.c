#include <stdlib.h>
#include <stdio.h>


int main() {

    int n = 0;
    int m = 0;

    printf("n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("error\n");
        return 0;
    }

    printf("m: ");
    scanf("%d", &m);
    if (m < 0) {
        printf("error\n");
        return 0;
    }

    int a[n];
    int b[m];

    // input a
    if (n > 0){
        printf("a[]: ");
        for (int i = 0; i < n; i++)
             scanf("%d", &a[i]);
    }

    // input b
    if (m > 0){
        printf("b[]: ");
        for (int i = 0; i < m; i++){
            int v = 0;
            scanf("%d", &b[i]);
        }
    } 

    // array c 
    int *c = malloc((m + n) * sizeof(int));

    // fill c
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    int cn = n;

    // Объединение множеств A и B
    for (int i = 0; i < m; i++)
    {
        int j;
        for (j = 0; j < n; j++)
            if (a[j] == b[i]) break;
        if (j == n){
            c[cn] = b[i];
            cn++;
        }
    }

    // Вывод множества C
    printf("cn:\t%d\n", cn); 
    printf("c[]:\t");
    for (int i = 0; i < cn; i++)
    {
        printf("%d", c[i]);
        if (i < cn - 1) putchar(' ');
    }
    printf("\n");

    // Разность множеств A и B
    int dn = 0;
    int *d = malloc((m + n) * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n; j++) 
            if (b[j] == c[i]) break;

        if (m > 0) {
            if (j == n ) {
                d[dn] = a[i];
                dn++;
            }
        }
        else {
            d[dn] = a[i];
            dn++;           
        }
    }
    printf("dn:\t%d\n", dn);
    if (dn > 0) {
        printf("d[]:\t");
        for (int i = 0; i < dn; i++){
            printf("%d", d[i]);
            if (i < dn - 1) putchar(' ');
        }
        printf("\n");
    }
    else {
	    printf("d[]:\tempty\n"); 
    }

    int *e = malloc((m + n) * sizeof(int));

    // Пересечение множеств
    int en = 0;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++)
            if (d[j] == a[i]) break;    
        if (j == n) {
            e[en] = a[i];
            en++;
        }
    } 

    // output e
    printf("en:\t%d\n", en);
    if (en > 0) {
        printf("e[]:\t");
        for (int i = 0; i < en; i++) {
            printf("%d", e[i]);
            if (i < en - 1)
                putchar(' ');
        }
        printf("\n");
    }
    else 
        printf("e[]:\tempty\n"); 

    free(c);
    free(d);
    free(e);
    return 0;
}