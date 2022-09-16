#include <stdio.h>
#include <math.h>

#include "mylib.h"

int main() {
    int n;

    printf("num: ");
    scanf("%d", &n);

    // array
    int_list a;
    a.len = n;
    a.array = (int*)malloc(a.len * sizeof(int));

    int_list b;
    b.len = n;
    b.array = (int*)malloc(b.len * sizeof(int));

    float_list c;
    c.len = n;
    c.array = (float*)malloc(c.len * sizeof(float));

    float_list d;
    d.len = n;
    d.array = (float*)malloc(d.len * sizeof(float));
    
    // input a
    for (int i = 0; i < a.len; i++) {
        printf("a%d: ", i);
        scanf("%d", &a.array[i]);
    }
    
    // input b
    for (int i = 0; i < b.len; i++){ 
        printf("b%d: ", i);
        scanf("%d", &b.array[i]);
    }

    printf("sa: %.3f\n", (float)sum(a));
    printf("sb: %.3f\n", (float)sum(b));
    printf("ma: %.3f\n", avg(a));
    printf("mb: %.3f\n", avg(b));
    printf("sda: %.3f\n", stddev(a));
    printf("sdb: %.3f\n", stddev(b));

    float param = 0.0f;
    printf("param: ");
    scanf("%f", &param);
    // fill c
    for (int i = 0; i < c.len; i++)
    {
        c.array[i] = lerp((float)a.array[i], (float)b.array[i], param);
    }
    printf("c: ");
    displayf(c);
}
