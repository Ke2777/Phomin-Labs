#include <stdint.h>                          
#include <stdio.h>                           
#include <math.h> // sqrt                    
                                             
int main()                                   
{                                            
    float a, b, c, d, x1, x2;             
                                             
    printf("a: ");                           
    scanf("%f", &a);                         
                                             
    printf("b: ");                           
    scanf("%f", &b);                         
                                             
    printf("c: ");                           
    scanf("%f", &c);                         
                                             
    d = b * b - (4 * a * c);                 
    float sqrt_d = sqrt(d);                  
                                             
    if (d >= 0)                              
    {                                        
        x1 = (-1 * b - sqrt_d) / (2 * a);    
        x2 = (-1 * b + sqrt_d) / (2 * a);    
    }                                        
                                                                                    
    char bs = '+';                           
    if (b < 0.0f)                            
    {                                        
        bs = '-';                            
        b = -b;                              
    }                                        
    char bc = '+';
    if (c < 0.0f)
    {

        bc = '-';
        c = -c;
    }

    printf("eq:\t%.1f * x ^ 2 %c %.1f * x %c %.1f = 0\n", a, bs, b, bc, c);
    printf("d:\t%.3f\n", d);

    if (d < 0)
    {
        printf("no roots\n");
    }

    else
    {
        if (x1 == x2)
        {
            printf("x:\t%.3f\n", x1);
        }
        else
        {
            printf("x1:\t%.3f\n", x1);
            printf("x2:\t%.3f\n", x2);
        }
    }
    return 0;
}
