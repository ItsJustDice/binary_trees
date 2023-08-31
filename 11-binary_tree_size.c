#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0); /* Return if tree is empty(NULL) */
	/* If tree is not empty, it recursively calls itself left & right */
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	/* size of tree is calculated by adding sizes of l&r */
	/* adding 1 root node, returned as the size of binary tree */
}
