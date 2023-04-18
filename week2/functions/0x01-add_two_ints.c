#include <stdio.h>

/**
 * Main - main function goes here
 *
 * A program that adds two integers together using a function.
 *
 * Return: 0 if successful.
 */

// Function prototype
int add_two_ints(int x, int y);

int main(void)
{
        //Ask the user for input
        printf("Give me an integer: ");
        int x;
        scanf("%i", &x);
        printf("Give me another integer: ");
        int y;
        scanf("%i", &y);

        //Add the two numbers together via a function call
        int z = add_two_ints(x, y);

        //output the result
        printf("The sum of %i and %i is %i!", x, y, z);
}

/**
 * add_two_ints - Function definition
 *
 * This function takes two integers as parameters and returns their sum.
 *
 * @x: First integer to add.
 * @y: Second integer to add.
 *
 * Return: The sum of x and y.
 */
int add_two_ints(int a, int b)
{
        int sum = a + b;

        return sum;
}

