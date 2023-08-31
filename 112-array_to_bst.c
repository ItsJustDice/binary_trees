#include "binary_trees.h"
/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: the number of elements in the array
 * Return: A pointer to the root node of the created BST
 *         NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int j; /* initalizes variable j and pointer root to NULL */
	bst_t *root = NULL;
	/* Iterates elements of the input array */
	for (j = 0; j < size; j++) /* value of j is passed as 2nd arguement */
		bst_insert(&root, array[j]);

	return (root); /* returns search tree containing all values */
}
