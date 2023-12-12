/* Exercise 1-4: Celcius to Fahrenheit Table in Reverse
 * Author: John Banda
 * Date: 12/12/2023
 */

#include <stdio.h>

/* Print the Farenheit table
    for far = 0 ... 300 */

float CelciusToFahrenheit(float Cel);

int main (){

    float min = 0, max = 300, fah = 0, step = 20;
    float deg = 0;
    
    // Print heading on top of the table
    printf("%3s %6s\n", "Deg", "Fah");

    for (float i = max; i >= min;  i = i - step){

        deg = i;

        fah = CelciusToFahrenheit(deg);     // Convert the Fahrenheit to degrees
     
        printf("%3.0f %6.1f\n", deg, fah);
    }
}

float CelciusToFahrenheit(float deg){

    return (9.0 * deg / 5.0 + 32);

}