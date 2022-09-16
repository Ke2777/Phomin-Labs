#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define rnd (double) rand() / (double) RAND_MAX

typedef struct array {
    int len;
    double *array;
} array;
int len(array list)
{
    return list.len / sizeof(list.array[0]);
}

typedef struct int_list {
    int len;
    int *array;
} int_list;

typedef struct float_list {
    int len;
    float *array;
} float_list;

typedef struct double_list {
    int len;
    double *array;
} double_list;

// This function insert new element in float type array at specified index
void insert(float_list list, int index, float value)
{
    float_list result;
    result.len = list.len;
    result.array = (float*)malloc(result.len * sizeof(float));
    for (int i = 0; i < index; i++)
    {
        result.array[i] = list.array[i];
    }
    result.array[index] = value;
    for (int i = index + 1; i < list.len; i++)
    {
        result.array[i] = list.array[i - 1];
    }
    for (int i = 0; i < result.len; i++)
    {
        list.array[i] = result.array[i];
    }
    /*
    for (int i = index - 1; i >= index; i--)
    {
        list.array[i + 1] == list.array[i];
    }
    list.array[index] = value;
    */
}

int ind(float_list list, float value) // return index element of list
{   
    for (int i = 0; i < list.len; i++)
    {
        if (i == value)
        {
            return i;
        }
    }
}

int count(int_list list, int find) 
{
    int count = 0;
    for (int i = 0; i < list.len; i++)
    {
        if (list.array[i] == find)
        {
            count++;
        }
    }
    return count;
}

int countf(float_list list, int find) 
{
    int count = 0;
    for (int i = 0; i < list.len; i++)
    {
        if (list.array[i] == find)
        {
            count++;
        }
    }
    return count;
}

int countd(double_list list, int find) 
{
    int count = 0;
    for (int i = 0; i < list.len; i++)
    {
        if (list.array[i] == find)
        {
            count++;
        }
    }
    return count;
}

void display(int_list list)
{
    for (int i = 0; i < list.len; i++)
    {
        printf("%d", list.array[i]);
        if (i < list.len - 1)
        {
            putchar(' ');
        }  
    } 
    printf("\n");   
}

void displayf(float_list list)
{
    for (int i = 0; i < list.len; i++)
    {
        printf("%.2f", list.array[i]);
        if (i < list.len - 1)
        {
            putchar(' ');
        }  
    } 
    printf("\n");   
}

void displayd(double_list list)
{
    for (int i = 0; i < list.len; i++)
    {
        printf("%lf", list.array[i]);
        if (i < list.len - 1)
        {
            putchar(' ');
        }  
    }
    printf("\n");    
}

int sum(int_list list)
{
    int s = 0;
    for (int i = 0; i < list.len; i++)
    {
        s += list.array[i];
    }
    return s;
}

float sumf(float_list list)
{
    float s = 0.0f;
    for (int i = 0; i < list.len; i++)
    {
        s += list.array[i];
    }
    return s;
}

float avg(int_list list)
{
    return sum(list) / (float)list.len;
}

float stddev(int_list list) // standard deviation
{
    float s = 0.0f;
    float min = avg(list);
    for (int i = 0; i < list.len; i++)
    {
        s += powf(list.array[i] - min, 2.0f);
    }
    return sqrtf((1.0f / list.len) * s);
}

float lerp(float a, float b, float t) // linear interpolation
{
    return a * (1.0f - t) + b * t;
}

float unlerp(float x, float x0, float x1)
{
    return (x - x0) / (x1 - x0);
}

float map(float x, float x0, float x1, float a, float b)
{
    float t = unlerp(x, x0, x1);
    return lerp(a, b, t);
}

double randf() // return random float number in range [0, 1]
{
    return (double) rand() / (double) RAND_MAX;
}

float noise(float a)
{
    return lerp(-a, a / 2, randf());
}