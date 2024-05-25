#include <stdio.h>

// Function to perform arithmetic operations and return result status
//riyaPal
int main() {
    float num1, num2;
    char op;
    
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
                return 1; 
            }
            break;
        default:
            printf("Invalid operator\n");
            return 1; 
    }

    return 0; 
}