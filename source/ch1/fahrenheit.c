#include <stdio.h>

/* Print the Farenheit table
    for far = 0 ... 300 */

float FahrenheitToDegrees(float fah);

int main (){

    float min = 0, max = 300, fah = 0, step = 20;
    float deg = 0;
    
    // Print heading on top of the table
    printf("%3s %6s\n", "Fah", "Deg");

    for (int i = min; i <= max / step;  i++){

        fah = i * step;
        if (fah == 0) fah++;                // Make smallest fah = 1

        deg = FahrenheitToDegrees(fah);     // Convert the Fahrenheit to degrees
     
        printf("%3.0f %6.1f\n", fah, deg);
    }
}

float FahrenheitToDegrees(float fah){

    return ((5.0 / 9) * (fah - 32));
}