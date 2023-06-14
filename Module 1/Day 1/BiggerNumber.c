// Online C compiler to run C program online
#include <stdio.h>
int biggest(int a,int b)
{
    if(a>b)
    {
        printf("First number is bigger than second number\n");   
    }
    else
    {
        printf("Second number is bigger than first number\n");   
    }
    /*
    int big;
    (a>b)?(big=a):(big=b);
    printf("Biggest of %d and %d is %d\n", a,b,big);
    */
}

int main() {
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);
    biggest(x,y);
    return 0;
}
