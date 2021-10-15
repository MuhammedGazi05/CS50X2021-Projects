#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// reading test
int main(void)
{
    string text = get_string("Text : ");

    float sentences = 0, letters = 0, words = 0;
    int i = 0;

    while (text[i] != '\0')
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }

        if (isalpha(text[i]))
        {
            letters++;

            if (isspace(text[i + 1]) || ispunct(text[i + 1]) || text[i + 1] == '\0') //checks alphabets, spelling and spacing.
            {
                if (text[i + 1] != '\'' && text[i + 1] != '-')
                {
                    words++;
                }
            }
        }
        i++;

    }
//calculate
    sentences *= 100 / words;
    letters *= 100 / words;
    float index = 0.0588 * letters - 0.296 * sentences - 15.8;

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }
}