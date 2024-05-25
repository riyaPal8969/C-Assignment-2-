#include <stdio.h>

int main() {
    // 3. Write a program that takes three numbers as input and outputs the largest among them. Use conditional statements to compare the values.
    // riya pal
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    printf("Largest number: %d\n", largest);
    return 0;
}