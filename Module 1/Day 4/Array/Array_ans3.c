#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};  
    int len = sizeof(arr) / sizeof(arr[0]);
    int i, temp, start, end;

    printf("Original array is: ");
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    start = 0;
    end = len - 1;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array is: ");
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}