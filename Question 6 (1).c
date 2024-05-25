#include <stdio.h>

int main() {
    // 6. Write a program to calculate the average of three integers. Numbers are given by the user.
    // riya pal
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    float average = (num1 + num2 + num3) / 3.0;
    printf("Average: %.2f\n", average);

    return 0;
}