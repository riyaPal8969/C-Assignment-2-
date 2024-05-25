#include <stdio.h>

int main() {
    int year;
    float num1, num2;
    char op;
    
    // Leap year check
//riyaPal
    printf("Enter a year: ");
    scanf("%d", &year);
    int isLeap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    if (isLeap) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    // Calculator
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}