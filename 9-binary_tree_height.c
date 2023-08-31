#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (!tree)
		return (0); /* Base case: Return 0 if tree is NULL */
	/* sum-up height of left subtree (if exists) */
	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	/* sum-up height of the right subtree (if exists) */
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	/* Return the greater of two subtree heights */
	return (height_left > height_right ? height_left : height_right);
}
