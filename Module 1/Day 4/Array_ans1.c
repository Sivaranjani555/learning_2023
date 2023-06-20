#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};  
    int len = sizeof(arr) / sizeof(arr[0]);
    int i, sum = 0;
    float average;

    for (i = 0; i < len; i++)
    {
        sum += arr[i];
    }

    average = (float)sum / len;

    printf("Sum of array elements : %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}
