#include <stdio.h>

int main() {
    // 4. Develop a program that reads a number from the user and prints whether it is positive, negative, or zero.
    // riya pal
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("%d is zero.\n", num);
    }

    return 0;
}