#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeArray(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    // Dynamically Create an array of structures 
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    // Initialize the array of structures
    initializeArray(students, size);

    // Display the array of structures
    printf("\nArray of Structures:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Rollno: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}