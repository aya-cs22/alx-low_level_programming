#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min + 1; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
