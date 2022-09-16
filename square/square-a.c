#include <stdint.h>                                                              
#include <stdio.h>                                                               
                                                                                 
int main()                                                                       
{                                                                                
    float a, b, c;                                                               
                                                                                 
    printf("a: ");                                                               
    scanf("%f", &a);                                                             
                                                                                 
    printf("b: ");                                                               
    scanf("%f", &b);                                                             
                                                                                 
    printf("c: ");                                                               
    scanf("%f", &c);                                                             
                                                                                 
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
    return 0;                                                                    
}                                                                                