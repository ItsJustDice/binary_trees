#include "binary_trees.h"
/**
 * binary_tree_rotate_left - Function that  rotates left the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *len;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL); /* returns 0 if NULL or empty */
	}
	len = tree->right; /* creates new pointer len sets to right child */
	tree->right = len->left; /* right tree updated to be left child len */
	if (len->left != NULL)
	{
		len->left->parent = tree; /* set as parent tree len */
	}
	len->left = tree;
	len->parent = tree->parent;
	tree->parent = len;
	return (len); /* returns new root of rotated bineray tree */
}
