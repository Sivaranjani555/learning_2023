#include <stdio.h>

int main()
{
    int arr[] = {5, 2, 10, 1, 7};  
    int len = sizeof(arr) / sizeof(arr[0]);
    int i, min, max;

    min = arr[0];
    max = arr[0];

    for (i = 1; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Minimum number in Array : %d\n", min);
    printf("Maximum number in Array : %d\n", max);

    return 0;
}