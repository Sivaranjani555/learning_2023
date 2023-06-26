#include <stdio.h>
#include <ctype.h>

void changeToUpperCase(FILE *source, FILE *destination) {
    int c;
    while ((c = fgetc(source)) != EOF) {
        fputc(toupper(c), destination);
    }
}

void changeToLowerCase(FILE *source, FILE *destination) {
    int c;
    while ((c = fgetc(source)) != EOF) {
        fputc(tolower(c), destination);
    }
}

void changeToSentenceCase(FILE *source, FILE *destination) {
    int c;
    int isFirstCharacter = 1;
    while ((c = fgetc(source)) != EOF) {
        if (isFirstCharacter) {
            fputc(toupper(c), destination);
            isFirstCharacter = 0;
        } else {
            fputc(tolower(c), destination);
        }
        if (c == '.' || c == '?' || c == '!') {
            isFirstCharacter = 1;
        }
    }
}

int main() {
    FILE *source, *destination;
    char sourceFile[100], destinationFile[100], option;
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFile);

    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFile);

    printf("options for text case are : \n u \n l \n s \n");
    printf("Enter the option for text case: ");
    scanf(" %c", &option);

    source = fopen(sourceFile, "r");
    destination = fopen(destinationFile, "w");

    if (source == NULL || destination == NULL) {
        printf("Failed to open files.\n");
        return 1;
    }

    switch (option) {
        case 'u':
            changeToUpperCase(source, destination);
            printf("File copied and text converted to Upper Case.\n");
            break;
        case 'l':
            changeToLowerCase(source, destination);
            printf("File copied and text converted to Lower Case.\n");
            break;
        case 's':
            changeToSentenceCase(source, destination);
            printf("File copied and text converted to Sentence Case.\n");
            break;
        default:
            printf("Invalid option.\n");
            return 1;
    }

    fclose(source);
    fclose(destination);

    return 0;
}