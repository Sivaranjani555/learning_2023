#include<stdio.h>
int grade(int marks)
{
    if(marks>=90 && marks<=100)
    {
        printf("Your Grade is : A");
    }
    else if(marks>=75 && marks<=89)
    {
        printf("Your Grade is : B");
    }
    else if(marks>=60 && marks<=74)
    {
        printf("Your Grade is : C");
    }
    else if(marks>=50 && marks<=59)
    {
        printf("Your Grade is : D");
    }
    else if(marks>=0 && marks<49)
    {
        printf("Your Grade is : F");
    }
    else
    {
        printf("Invalid Mark");
    }
}
void main()
{
    int mark;
    printf("Enter your marks :  ");
    scanf("%d",&mark);
    grade(mark);
}

