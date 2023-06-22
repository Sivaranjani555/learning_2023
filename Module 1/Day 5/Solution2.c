#include <stdio.h>

struct Complex {
    float realNo;
    float imagNo;
};

// Function to read a complex number
struct Complex readComplex() {
    struct Complex num;

    printf("Enter the realNo part: ");
    scanf("%f", &num.realNo);

    printf("Enter the imagNoinary part: ");
    scanf("%f", &num.imagNo);

    return num;
}

// Function to write a complex number
void writeComplex(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.realNo, num.imagNo);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.realNo = num1.realNo + num2.realNo;
    result.imagNo = num1.imagNo + num2.imagNo;

    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.realNo = (num1.realNo * num2.realNo) - (num1.imagNo * num2.imagNo);
    result.imagNo = (num1.realNo * num2.imagNo) + (num1.imagNo * num2.realNo);

    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    num1 = readComplex();

    printf("Enter the second complex number:\n");
    num2 = readComplex();

    printf("\n");

    printf("First complex number:\n");
    writeComplex(num1);

    printf("Second complex number:\n");
    writeComplex(num2);

    printf("\n");

    sum = addComplex(num1, num2);
    printf("Sum of the complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);

    return 0;
}