/* Exercise 1-6
 * Authoer: John Banda
 * Desciption: verify that getchar() != EOF
 */

#include <stdio.h>

int main(){
    
    // Print the value of EOF
    char c;

    // assign the value of c to getchar() != EOF
    c = getchar() != EOF;
    
    // Print it to the screen
    printf("The value of gechar() != EOF: %d\n", c);

    return 0;

}