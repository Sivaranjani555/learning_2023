#include <stdio.h>

int bit_operations(int number, int OperationType) {
    switch (OperationType) {
        case 1:
            // Set 1st bit,if operation type is 1
            number = number | (1 << 0);
            break;
        case 2:
            // Clear 31st bit,if operation type is 2
            number = number & ~(1 << 31);
            break;
        case 3:
            // Toggle 16th bit,if operation type is 3
            number = number ^ (1 << 15);
            break;
        default:
            printf("Error: Invalid operation type.\n");
    }

    return number;
}

int main() {
    int number,OperationType;
    printf("Enter an integer of (32 bits): ");
    scanf("%d", &number);
    
    printf("Operations types \n1 \n2 \n3\n");
    printf("Enter the operation: ");
    scanf("%d", &OperationType);
    
    int result = bit_operations(number, OperationType);
    printf("Result: %d\n", result);
    return 0;
}