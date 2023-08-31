#include "binary_trees.h"
/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: a double pointer to the root node of the BST to insert the value
 * @value: the value to store in the node to be inserted
 * Return: A pointer to the created node
 *         NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	/* Initilizes 3 pointers as NULL */
	bst_t *len2 = NULL;
	bst_t *count = NULL;
	bst_t *i = NULL;
	/* checks if input tree is NULL */
	if (!tree)
		return (NULL); /* returns 0 if emprty or NULL */
	if (*tree == NULL) /* if not empty, assigns new node if tree empty */
		return (*tree = binary_tree_node(NULL, value));

	len2 = *tree;
	while (len2) /* enters in while loop iterates position */
	{
		count = len2; /* set to the root of the tree */
		if (value < len2->n) /* value less len2, updates to r child */
			len2 = len2->left; /* updates to len2 value greater */
		else if (value > len2->n)
			len2 = len2->right;
		else if (value == len2->n)
			return (NULL); /*return NULL if equal value */
	}

	i = binary_tree_node(NULL, value); /* creates new node */
	if (count == NULL)
		count = i; /* checks if count is NULL value */
	else if (value < count->n) /* checks if value is less than */
	{
		count->left = i; /* Parent pointer is set to count */
		i->parent = count; /* unless count is r child, i is Parent */
	}
	else
	{
		count->right = i;
		i->parent = count;
	}

	return (i); /* returns new node i, new value is successful */
}
