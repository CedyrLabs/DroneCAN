#include <stdio.h>
#include <math.h>
#include <errno.h>

extern int errno;

// Function Calculate standard deviation
float standard_deviation(float data[], int n)
{
    float sum = 0.0, mean, standardDeviation = 0.0;

    int i;

    for(i = 0; i < n; ++i)
    {
        sum += data[i];
    }

    mean = sum/n;

    for(i = 0; i < n; ++i)
        standardDeviation += pow(data[i] - mean, 2);

    return sqrt(standardDeviation / n);
}

// function calculate min and max of an integer array
void min_max(int arr[], int n, int *min, int *max)
{
    int i;
    *min = *max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main(void)
{
    // Take an array of 100 integers and print the standard deviation and min/max 
    int arr[100];
    int i;
    for (i = 0; i < 100; i++)
    {
        arr[i] = i;
    }
    float std_dev = standard_deviation(arr, 100);
    int min, max;
    min_max(arr, 100, &min, &max);
    printf("Standard deviation: %f", std_dev);
    printf("Min: %d", min);

    printf("Hello, world!\n");
}