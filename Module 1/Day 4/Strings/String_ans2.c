#include <stdio.h>

int main()
{
    char str[] = "12345";  
    int result = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        int ival = str[i] - '0';
        result = result * 10 + ival;
        i++;
    }

    printf("Number as a String: %s\n", str);
    printf("Number as a Integer: %d\n", result);

    return 0;
}