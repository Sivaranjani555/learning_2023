#include <stdio.h>
//structure for student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

void swapStudents(struct Student* student1, struct Student* student2) {
    // Swap the name 
    char tempName[50];
    strcpy(tempName, student1->name);
    strcpy(student1->name, student2->name);
    strcpy(student2->name, tempName);

    // Swap the roll number 
    int tempRollNumber = student1->rollNumber;
    student1->rollNumber = student2->rollNumber;
    student2->rollNumber = tempRollNumber;

    // Swap the marks 
    float tempMarks = student1->marks;
    student1->marks = student2->marks;
    student2->marks = tempMarks;
}

int main() {
    struct Student student1, student2;

    // Input details for first student 
    printf("Enter details for first Student :\n");
    printf("Enter name: ");
    scanf("%s", student1.name);
    printf("Enter roll number: ");
    scanf("%d", &student1.rollNumber);
    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    // Input details for second student 
    printf("\nEnter details second for Student 2:\n");
    printf("Enter name: ");
    scanf("%s", student2.name);
    printf("Enter roll number: ");
    scanf("%d", &student2.rollNumber);
    printf("Enter marks: ");
    scanf("%f", &student2.marks);
    printf("--------------------------------------\n");
    printf("Before swapping:\n");
    printf("Details of first Student :\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);
    printf("\nDetails of second Student :\n");
    printf("Name: %s\n", student2.name);
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Marks: %.2f\n", student2.marks);
    printf("--------------------------------------\n");
    
    // Swap the fields using the swapFields() function
    swapStudents(&student1, &student2);

    printf("After swapping:\n");
    printf("Details of first Student :\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);
    printf("\nDetails of second Student :\n");
    printf("Name: %s\n", student2.name);
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Marks: %.2f\n", student2.marks);
    printf("--------------------------------------\n");
    return 0;
}