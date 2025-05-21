#include <stdio.h>


// This is where you add the two functions
float fahrenheit_to_celsius(float fahr)
{
    return (float)((fahr-32)*5)/9;
}

float celsius_to_fahrenheit(float cels)
{
    return (float)((cels*9)/5+32);
}
int main() {
    float temp_f = 100.0;
    float temp_c = 37.0;

    printf("%.1f\n", fahrenheit_to_celsius(temp_f));  // Expected output: 37.8
    printf("%.1f\n", celsius_to_fahrenheit(temp_c));  // Expected output: 98.6

    return 0;
}
