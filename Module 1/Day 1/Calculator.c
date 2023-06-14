#include <stdio.h>

int main() {
    float number1, number2, Result;
    char operator;
    printf("Enter number 1: ");
    scanf("%f", &number1);
    printf("Operators are: \n  + \n  - \n  * \n  / \n");
    printf("Enter the operator:  ");
    scanf(" %c", &operator);
    printf("Enter number 2: ");
    scanf("%f", &number2);
    printf("---------------------------------------\n");
    printf("Result:\n");
    
    switch (operator) {
        case '+':
            Result = number1 + number2;
            printf("Addition of %.2f and %.2f is: %.2f\n", number1, number2,Result);
            break;
        case '-':
            Result = number1 - number2;
            printf("Subraction of %.2f and %.2f is: %.2f\n", number1, number2,Result);
            break;
        case '*':
            Result = number1 * number2;
            printf("Multiplication of %.2f and %.2f is: %.2f\n", number1, number2,Result);
            break;
        case '/':
           Result = number1 / number2;
               printf("Division of %.2f and %.2f is: %.2f\n", number1, number2,Result);
           break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
    printf("---------------------------------------\n");
    return 0;
}
