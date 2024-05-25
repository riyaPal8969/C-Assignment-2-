#include <stdio.h>

int main() {
    // 10. Write a program to input three characters from the user and display characters with their corresponding ASCII codes.
    //Riya Pal
    char ch1, ch2, ch3;
    printf("Enter three characters: ");
    scanf(" %c %c %c", &ch1, &ch2, &ch3);

    printf("ASCII code of %c: %d\n", ch1, ch1);
    printf("ASCII code of %c: %d\n", ch2, ch2);
    printf("ASCII code of %c: %d\n", ch3, ch3);

    return 0;
}