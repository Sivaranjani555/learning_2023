#include <stdio.h>
//Exponent function
void ShowExponent(double a) {
    unsigned  long long *ptr = (unsigned long long *)&a;
    unsigned  long long exponent = (*ptr >> 52) & 0x7FF;

    printf("Hexadecimal Exponent : 0x%llX\n", exponent);
    
    printf("Binary Exponent: 0b");
    for (int i = 10; i >= 0; i-=1) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}
//Main function
int main() {
    double a = 0.7;
    ShowExponent(a);
    return 0;
}