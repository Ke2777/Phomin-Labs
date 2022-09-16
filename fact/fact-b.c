#include <stdint.h>
#include <stdio.h>

int x;
int y;

int g = 1;


int f(int x)
{
    int result = 1;

    if (x == 0)
    {
        return 1;
    }
    else if (x > 0)
    {
        for (int i = 1; i <= x; i++)
        {
            result *= i;
        }

        return result;
    }
}

int main()
{
    printf("x: ");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("error\n");
    }
    
    else
    {
        printf("x\tf(x)\n");
        for (int i = 0; i <= x; i++)
        {
            y = f(i);
            printf("%d\t%d\n", i, y);
        }
    }
}