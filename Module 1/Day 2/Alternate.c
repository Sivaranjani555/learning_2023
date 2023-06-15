#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    printf("Alternate numbers :\n");
    for (int i = 0; i < size; i += 2) {
        
        printf("%d\n",arr[i]);
        sum += arr[i];
    }

    printf("Sum of alternate elements in an array : %d\n", sum);

    return 0;
}
