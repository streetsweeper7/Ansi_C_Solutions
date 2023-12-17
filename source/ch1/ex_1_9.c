/*
 * Exercise 1-9: Write a program to copy its input to its output, replacing 
 * each string of one or more blanks by a single blank.
 */

#include <stdio.h>

#define BLANK ' '
#define NEWLINE '\n'
int main ()
{
    int c = 0; // The character read from the input
    int prev_c = 0;


    while ((c = getchar()) != EOF)    // Ensure that you don't get a new file
    {   
        getchar();                  // consume '\n'
        if (c != BLANK) 
        {
           putchar(c);
           putchar('.');
        } 
        else if (c == BLANK)
        {
            if (prev_c != BLANK)       // If the previous retrieved c was a blank, skip
            {
                putchar(c);            // Print the character
                putchar('.');
            }
        }
        
        prev_c = c;                 // Update the previous character
        
       

    }

    
}