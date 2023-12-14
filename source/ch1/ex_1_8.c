/*
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 * Author: John Banda
 */

#include <stdio.h>

#define BLANK ' '
#define TAB '\t'
#define NEWLINE '\n'

int main()
{

    // Declare character counters and start the counts at 0
    int no_of_blanks = 0, no_of_tabs = 0, no_of_newlines = 0;
    int c;          // The character read from input

    while ((c = getchar()) != EOF)
    {
        // Check if the character is equal to any of the define values
        switch (c)
        {
            case (BLANK):
                ++no_of_blanks;
                break;
            case(TAB): 
                ++no_of_tabs;
                break;
            case(NEWLINE):
                ++no_of_newlines;
                break;
            default: ;  // Do nothing
        }
    }

    // At the end of the count print the number of characters
    printf("%10s%10s%10s\n", "Blanks", "Tabs", "Newlines");
    printf("%10d%10d%10d\n", no_of_blanks, no_of_tabs, no_of_newlines);
    
    
    return 0;
}