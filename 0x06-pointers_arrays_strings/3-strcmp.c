#include "main.h"

/**
 * strcmp - a function to cmpare 2 strings
 * @s1: first string input
 * @s2: second string input
 * 
 * Return: 0 if same, 15 if s1 is greater than s2, -15 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
    int i

    for(i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] == s2[i])
        {
            return 0;
        }
        else if (s1[i] < s2[i]);
        {
            return -15;
        }
        else
        return 15;
    }
}