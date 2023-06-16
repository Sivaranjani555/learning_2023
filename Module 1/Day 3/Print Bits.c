#include <stdio.h>

void Print_Bits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31; 
    for (i = 0; i < 32; i++) {
        if (num & mask) {
            printf("1");
        } else {
            printf("0");
        }
        mask >>= 1;
    }

    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits : ");
    Print_Bits(num);

    return 0;
}