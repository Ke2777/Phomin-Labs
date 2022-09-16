#include <stdio.h>

int main()
{
    #define n 5
    int a[n];

    int m;
    printf("num: ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        printf("a%d: ", i);
        scanf("%d", &a[i]);
    }

    printf("a[] = ");
    for (int i = 0; i < m; i ++)
    {
        printf("%d", a[i]);
        if (i < (m - 1)) putchar(' ');
        else
            putchar('\n');
    }

    int s = 0;
    for (int i = 0; i < m; i ++)
        s += a[i];
    printf("sum: %d\n", s);

    return 0;
}  