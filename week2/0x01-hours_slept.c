#include <stdio.h>

/**
 * Pseudocode
 * Start
 * Declare an array named hours with 5 elements
 * Print "Enter the number of hours slept for each day of the 5 days"
 * For i = 0 to 4
 *      a. Read the value entered by the user and store it in &hours[i]
 * End
 * Print "The number of hours slept for each day of the 5 days are:"
 * For i = 0 to 4
 *      a. Print hours[i] on the screen
 * End
 *
 * Main - Goes Here
 *
 * Return: Always (0)
 */

int main(void)
{
    int hours[5];

    printf("Enter the number of hours slept for each day of the 5 days: \n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &hours[i]);
    }

    printf("The number of hours slept for each day of the 5 days are:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", hours[i]);
    }

    return (0);
}

