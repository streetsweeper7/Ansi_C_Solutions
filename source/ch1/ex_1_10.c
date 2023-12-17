/*
 * Exercise 1-10. Write a program to copy its input to its output, 
 * replacing each tab by \t, each backspace by \b, and each backslash by 
 * \\. This makes tabs and backspaces visible in an unambiguous way.
 */
#include <stdio.h>

#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'
int main()
{

    int c = 0;
    // Read characters into c

    while ((c = getchar()) != EOF)
    {
        // Check the value in c
        if (c == TAB)
        {
            printf('\\');
            printf('t');
            // consume the '\n' from the input
            getchar();
        } else if (c == BACKSPACE)
        {
            printf('\\b');
            // consume the '\n' from the input
            getchar();

        } else if (c == BACKSLASH)
        {
            printf('\\\\');
            // consume the '\n' from the input
            getchar();
        } else if (c == '\n')
        {
            printf(c);
        } else 
        {
            // If c is neither a tab or backspace or backlash, print it out
            printf(c);
            // consume the '\n' from the input
            getchar();
        }



    }

    // Successfully return
    return 0;
}