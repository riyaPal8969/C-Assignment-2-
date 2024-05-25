#include <stdio.h>
#include <ctype.h>

int main() {
    // 5. Create a program that takes a single character as input and determines whether it is a vowel or a consonant.
    // riya pal
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}