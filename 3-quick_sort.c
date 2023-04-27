#include "sort.h"

size_t _partition(int *array, size_t low, size_t high);
void sorting_algo(int *array, size_t low, size_t high);
void quick_sort(int *array, size_t size);


/**
 * _partition - Divides the array to diiferernt part
 * @array: Pointer to the array
 * @low: The starting osition@high: The ending position
 * Return: A size_t
 */
size_t _partition(int *array, size_t low, size_t high)
{
int piv, temp;
size_t i, j;

piv = array[high];
i = low - 1;
for (j = low; j <= high - 1; j++)
{
if (array[j] < piv)
{
i++;
temp = array[j];
array[j] = array[i];
array[i] = temp;
}
}
temp = array[i + 1];
array[i + 1] = array[high];
array[high] = temp;
return (i + 1);
}

/**
 * sorting_algo - Sorting the array
 * @array: Pointer to the array
 * @low: starting index
 * @high: ending index
 * Return: Nothing
 */
void sorting_algo(int *array, size_t low, size_t high)
{
size_t par;

if (low < high)
{
par = _partition(array, low, high);
sorting_algo(array, low, par - 1);
sorting_algo(array, par + 1, high);
}
}


/**
 * quick_sort - Quick sort algorithm
 * @array: pointer to the Array 
 * @size: Size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{

size_t low, high;

printf("I am ok\n");

if (size > 0)
{
low = 0;
high = size - 1;
sorting_algo(array, low, high);
}
}
