#include <stdio.h>

int main() {
    int RollNo, PhysicsMark, MathsMark, ChemistryMark;
    char Name[50];

    printf("Enter Roll No:  ");
    scanf("%d", &RollNo);
    printf("Enter Name:  ");
    scanf(" %[^\n]s", Name);
    printf("Enter Marks of Physics:  ");
    scanf("%d", &PhysicsMark);
    printf("Enter Marks of Math:  ");
    scanf("%d", &MathsMark);
    printf("Enter Marks of Chemistry:  ");
    scanf("%d", &ChemistryMark);
    int Total = PhysicsMark + MathsMark + ChemistryMark;
    float Percentage = (float)Total / 3;
    printf("*****************************\n");
    printf("SUMMARY\n\n");
    printf("Roll No:  %d\n", RollNo);
    printf("Name: %s\n", Name);
    printf("Physics Mark is:  %d\n", PhysicsMark);
    printf("Math Marks is:  %d\n", MathsMark);
    printf("Chemistry Marks is:  %d\n", ChemistryMark);
    printf("Total Marks:  %d\n", Total);
    printf("Percentage:  %.2f%%\n", Percentage);
    printf("*****************************\n");
    return 0;
}