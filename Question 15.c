#include <stdio.h>

int main() {
    // 15. Temperature Converter
    // Riya pal
    float temperature;
    char scale;
    
    printf("Enter the temperature: ");
    scanf("%f", &temperature);
    printf("Enter the scale (F for Fahrenheit, C for Celsius): ");
    scanf(" %c", &scale);
    
    if (scale == 'F') {
        float celsius = (temperature - 32) * 5 / 9;
        printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, celsius);
    } else if (scale == 'C') {
        float fahrenheit = (temperature * 9 / 5) + 32;
        printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, fahrenheit);
    } else {
        printf("Invalid scale!\n");
    }
    
    return 0;
}