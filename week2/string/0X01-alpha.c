#include <cs50.h>
#include <stdio.h>
#include <string.h>

/**
 * Main - Main function goes here
 *
 * Return: Always (0).
 */
int main(void)
{
        string word = get_string("word: ");

        int word_length = strlen(word);
        for(int i = 0; i < word_length - 1; i++)
        {
                //Check if NOT Alphabetical i.e (ba..)
                if(word[i] > word[i + 1])
                {
                        printf("NO\n");
                        return (0);
                }
        }
        printf("YES\n");
        return (0);
}

