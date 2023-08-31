#include "binary_trees.h"
/**
 * array_to_heap - builds a Max Binary Heap tree from an array
 * @array: a pointer to the first element of the array to be converted
 * @size: the number of element in the array
 * Return: a pointer to the root node of the created Binary Heap
 *         NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	/* Initializes unsigned integer i  set to NULL */
	unsigned int j;
	heap_t *root = NULL;

	for (j = 0; j < size; j++) /* iterates elements of input array */
		heap_insert(&root, array[j]);
	/* value to be inserted into binary heap resulting in root node */
	return (root); /* returns root with all values from input array */
}
