#include "main.h"

/**
 * rev_array - function to reverse array 
 * @a: array to integer
 * @n: number of element of array to swap
 * 
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
    int tmp;
    int i = 0;
    n = n - 1;

    while (i <= n)
    {
        tmp = a[i];
        a[i] = a[n];
        a[n] = tmp;
        i++;
        n--;
    }
}