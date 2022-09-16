#include <stdint.h>
#include <stdio.h>

int x;
int y;

int a = 1;


int f(int x)
{
    int result = 1;

    if (x > 0)
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

    else if (x == 0)
    {
        printf("y:\t%d\n", a);
    }

    else if (x > 0)
    {
        y = f(x);
        printf("y:\t%d\n", y); // factorial 
    }
}