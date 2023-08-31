#include "binary_trees.h"
/**
 * array_to_avl - builds an AVL tree from an array
 * @array: array to create from
 * @size: size of the array
 * Return: a pointer to the root node of the created AVL tree
 *         NULL on failure
 */
avl_t *array_to_avl(int *array, size_t size)
{
	unsigned int j; /* declare variable root & avl_t* NULL */
	avl_t *root = NULL; /* enters loop that iterates index 0-size 1 */
	/* inset each element of an array pointed by root */
	for (j = 0; j < size; j++)
		avl_insert(&roop, array[j]);

	return (root); /* returns to root, resulting in AVL tree */
}
