#include <stdio.h>
#include <stdlib.h>
//Structure for student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    int n;
    struct Student* stud;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n student structures
    stud = (struct Student*)malloc(n * sizeof(struct Student));

    // Getting data for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", stud[i].name);

        printf("Enter roll number: ");
        scanf("%d", &stud[i].rollNumber);

        printf("Enter marks: ");
        scanf("%f", &stud[i].marks);
    }

    // Display data for each student
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails for Student %d:\n", i + 1);

        printf("Name: %s\n", stud[i].name);
        printf("Roll Number: %d\n", stud[i].rollNumber);
        printf("Marks: %.2f\n", stud[i].marks);
    }

    // Free dynamically allocated memory
    free(stud);

    return 0;
}