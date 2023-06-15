#include <stdio.h>
#include <string.h>
// Swapping of two values with any data type
void SwapValue(void *a, void *b, size_t size) {
    
    char temp[size];// Create a temporary buffer for size
    
    memcpy(temp, a, size);// Copy the value of 'a' to 'temp'

    memcpy(a, b, size);// Copy the value of 'b' to 'a'

    memcpy(b, temp, size);// Copy the value of 'temp' to 'b'
}

int main() {
    printf("Integer data :\n");
    int inum1 = 50, inum2 = 75;
    printf("Before Swap: num1 = %d, num2 = %d\n", inum1, inum2);
    // Swap the values of num1 and num2
    SwapValue(&inum1, &inum2, sizeof(int));
    printf("After Swap : num1 = %d, num2 = %d\n", inum1, inum2);
    printf("---------------------------------------\n");
    printf("Float data :\n");
    float fnum1 = 50.5, fnum2 = 75.5;
    printf("Before Swap: num1 = %.2f, num2 = %.2f\n", fnum1, fnum2);
    // Swap the values of num1 and num2
    SwapValue(&fnum1, &fnum2, sizeof(float));
    printf("After Swap : num1 = %.2f, num2 = %.2f\n", fnum1, fnum2);
    printf("---------------------------------------\n");
    printf("Char data :\n");
    char ch1 = 'X', ch2 = 'Y';
    printf("Before Swap: ch1 = %c, ch2 = %c\n", ch1, ch2);
    // Swap the values of ch1 and ch2
    SwapValue(&ch1, &ch2, sizeof(char));
    printf("After Swap : ch1 = %c, ch2 = %c\n", ch1, ch2);
    printf("---------------------------------------\n");
    return 0;
}