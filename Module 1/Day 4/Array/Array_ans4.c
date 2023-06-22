#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};  
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, sumEven = 0, sumOdd = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            //Adding even elements
            sumEven += arr[i];
        }
        else
        {
            //Adding odd elements
            sumOdd += arr[i];
        }
    }
    //Difference between even and odd elements
    int difference = sumEven - sumOdd;
    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);
    printf("Difference between even and odd elements: %d\n", difference);

    return 0;
}