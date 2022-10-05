#include "main.h"
/**
 * word_len - funtion to check the lenght of word
 * @str: string to check
 * Return: string to search
 */

int word_len(char *str)
{
	int index = 0, len = 0;

	for (index = 0; str[index] && str[index] != ' '; index++)
	{
		len++;
	}
	return (len);
}

/**
 * count_words - function count the number contained
 * @str: the string to search
 * Return: the words contained within str
 */

int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (str[index] != ' ')
		{
			words++;
			index -= word_len(str + index);
		}
	}
	return (words);
}

/**
 * strtow - function to split string to words
 * @str: string to seprate
 * Return: words
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words count == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			indesx++;

		letters = word_len(str + index);

		string[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
