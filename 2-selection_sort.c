#include "sort.h"

/**
 * selection_sort: Selection sort algorithm
 * @array: Pointer to the array
 * @size: Size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
size_t i, j;
int temp;

if (size <= 0)
return;
for (i = 0; i < size - 1; i++)
{
for (j = i + 1; j < size; j++)
{
if (array[i] > array[j])
{
temp = array[j];
array[j] = array[i];
array[i] = temp;
}
}
print_array(array, size);
continue;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
}
}
