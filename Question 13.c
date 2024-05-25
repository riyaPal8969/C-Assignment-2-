#include <stdio.h>

int main() {
    // 13. Divisibility Checker
    // Riya pal
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num2 == 0) {
        printf("Cannot divide by zero!\n");
    } else if (num1 % num2 == 0) {
        printf("%d is divisible by %d\n", num1, num2);
    } else {
        printf("%d is not divisible by %d\n", num1, num2);
    }
    
    return 0;
}