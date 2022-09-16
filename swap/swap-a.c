#include <stdlib.h> // EXIT_SUCCESS  
#include <stdio.h> // puts()         
                                     
int a = 10;                          
int b = 5;                           
                                     
int c;                               
                                     
int main(int argc, char **argv)      
{                                    
    printf("a = %d, b = %d\n", a, b);
                                     
    c = a;                           
    a = b;                           
    b = c;                           
                                     
    printf("a = %d, b = %d\n", a, b);
                                     
    return EXIT_SUCCESS;             
                                     
}                                    
                                     
                                     
                                     
                                     
                                     
                                     