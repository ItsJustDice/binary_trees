#include "binary_trees.h"
/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: a pointer to the root node of the BST to search
 * @value: the value to search in the tree
 * Return: A pointer to the node containing an int equal to `value`
 *         NULL if tree is NULL
 *         NULL if no match is found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	/* Input tree as a pointer and assigns nodes as pointer */ 
	bst_t *nodes = (bst_t *)tree;

	if (!tree) /* checks if tree is NULL */
		return (NULL); /* returns 0 if NULL or empty */
	/* iterates until value is found or pointer becomes NULL */
	while (nodes)
	{
		if (value == nodes->n)
			return (nodes); /* if values match, returns to nodes */
		if (value < nodes->n)
			nodes = nodes->left; /* if value less update to left */
		else if (value > nodes->n)
			nodes = nodes->right; /* if value greater update r */
	}

	return (NULL); /* returnns NULL, desired value is not found */
}
