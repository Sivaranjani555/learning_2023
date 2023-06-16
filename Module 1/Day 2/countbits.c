
#include <stdio.h>
//Function to count bits
int countSetBits(unsigned int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
// Main function
int main() {
    unsigned int a[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(a) / sizeof(a[0]);
    int TotalBits = 0;

    for (int i = 0; i < size; i++) {
        TotalBits += countSetBits(a[i]);
    }

    printf("Total number of set bits in the given array is: %d\n", TotalBits);

    return 0;
}
