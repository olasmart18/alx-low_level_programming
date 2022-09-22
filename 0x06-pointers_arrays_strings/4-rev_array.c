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
    int start;
    int end;

    while (start < end)
    {
    tmp = a[start];
    a[start] = a[end];
    a[end] = tmp;
        start++;
        end--;
    }
}