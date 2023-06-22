#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *sourceFile, *targetFile;
  char ch;

  sourceFile = fopen("sourceFile.txt", "r");
  //Printing error in source file when source file doesn't have content to copy.
  if (sourceFile == NULL) {
    printf("Error opening source file.\n");
    exit(1);
  }
  //Printing error in target file when source file doesn't have content to copy.
  targetFile = fopen("targetFile.txt", "w");
  if (targetFile == NULL) {
    printf("Error opening target file.\n");
    exit(1);
  }

  while ((ch = fgetc(sourceFile)) != EOF) {
    fputc(ch, targetFile);
  }
  //Closing both files
  fclose(sourceFile);
  fclose(targetFile);

  printf("File copied successfully.\n");

  return 0;
}