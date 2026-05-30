#include "statistics.h"
#include<stdio.h>

void get_mean(float arr[], int size, float* result)
{
    float sum = 0;
    for (int i =0; i < size; i++)
    {
        sum += arr[i];
    }

    *result = sum / size;
}

void get_max(float arr[], int size, float* result)
{
    float maximum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    *result = maximum;
}

void get_min(float arr[], int size, float* result)
{
    float minimum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    *result = minimum;
}

void get_median(float arr[], int size, float* result)
{
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                float temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    int form = size / 2;
    if (size % 2 == 0)
    {
        *result = (arr[form] + arr[form - 1]) / 2.0;
    }
    else if (size % 2 == 1)
    {
        *result = arr[form];
    }
}

void get_range(float arr[], int size, float* result)
{
    float max = arr[0];
    float min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int x = 0; x < size; x++)
    {
        if (arr[x] < min)
        {
           min = arr[x];
        }
    }

    *result = max - min;
}

void get_variance(float arr[], int size, float mean, float *result)
{
    float temp_arr[size];
    float sum = 0;

    for (int i = 0; i < size; i++) {
        temp_arr[i] = arr[i] - mean;
    }

    for (int i = 0; i < size; i++) {
        float temp = (temp_arr[i]) * temp_arr[i];
        temp_arr[i] = temp;
        sum += temp_arr[i]; 
    }

    *result = sum / size;
}

void get_mode(float arr[], int size, float* result)
{
    
    
}