#include <stdio.h> // Include standard input-output library

/**
* Main - main function
*
* Return: Always (0).
*/
int main(void) // Main function with no command line arguments
{ 
     // Get the array length from the user:
     int length; // Declare an integer variable called length
     printf("Length: "); // Prompt the user for input
     scanf("%d", &length); // Read an integer value from the user and store it in 'length'
 
     // Declare our array
     int twice[length]; // Declare an integer array called 'twice' with length 'length'
 
     // Set the first value
     twice[0] = 1; // Set the first element of the array to 1
     printf("%d\n", twice[0]); // Print the value of the first element
 
     // Loop through the array length
     for(int i = 1; i < length; i++) // Loop through the array indices from 1 to length-1
     {
         // Action to be performed
         // Make the current element twice the previous
         twice[i] = 2 * twice[i - 1]; // Calculate the value of the current element based on the previous element
 
         // Print the current element
         printf("%d\n", twice[i]); // Print the value of the current element
     }
 
     return 0; // Indicate successful program execution
}

