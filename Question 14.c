#include <stdio.h>

int main() {
    // 14. Triangle Classifier
    // Riya pal
    int side1, side2, side3;
    printf("Enter the lengths of three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid side lengths!\n");
    } else if (side1 == side2 && side2 == side3) {
        printf("Equilateral triangle\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles triangle\n");
    } else {
        printf("Scalene triangle\n");
    }
    
    return 0;
}