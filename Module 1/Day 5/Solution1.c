#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

float calculateSurfaceArea(struct Box* box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;

    // Assign values to the box dimensions
    myBox.length = 3.5;
    myBox.width = 2.8;
    myBox.height = 4.2;
    printf("Inputs: \n");
    printf("length: %.2f\n", myBox.length);
    printf("width : %.2f\n", myBox.width);
    printf("height: %.2f\n", myBox.height);

    // Calculate volume and surface area using pointer with (*) and (.)
    float volume = calculateVolume(&myBox);
    float surfaceArea = calculateSurfaceArea(&myBox);

    printf("--------------------\n");
    printf("Using pointer * \n");
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
    printf("--------------------\n");
    // Calculate volume and surface area using pointer with (->)
    float volumePtr = calculateVolume(boxPtr);
    float surfaceAreaPtr = calculateSurfaceArea(boxPtr);
    
    printf("Using pointer ->\n");
    printf("Volume : %.2f\n", volumePtr);
    printf("Surface Area : %.2f\n", surfaceAreaPtr);
    printf("--------------------\n");
    return 0;
}