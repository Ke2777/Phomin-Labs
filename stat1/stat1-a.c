#include <stdio.h>
#include <math.h>

#include "mylib.h"

int main() {
    int n;

    printf("num: ");
    scanf("%d", &n);

    // array
    char a[n];
    char b[n];
    
    // input a
    for (int i = 0; i < n; i++) {
        printf("a%d: ", i);
        scanf("%d", &a[i]);
    }
    
    // input b
    for (int i = 0; i < n; i++){ 
        printf("b%d: ", i);
        scanf("%d", &b[i]);
    }

    printf("sa: %.3f\n",(float) sum(a));
    printf("sb: %.3f\n", (float) sum(b));
    printf("ma: %.3f\n", avg(a));
    printf("mb: %.3f\n", avg(b));
    printf("sda: %.3f\n", stddev(a));
    printf("sdb: %.3f\n", stddev(b));

}
