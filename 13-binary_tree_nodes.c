#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: tree to count the nodes from
 * Return: number of nodes counted
 *         0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0); /* Return 0 if empty, or NULL */
	/* Subtracts num of leaf nodes calculates size of entire tree */
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 * Return: size of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0); /* return 0 if empty or NUll, or recursively l&r */
	/*size is calculated by adding size of l&r subtrees, 1 for root node */
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: tree to count the leaves from
 * Return: number of leaves
 *         0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0); /* Returns 0 if empty or NULL */

	if (!tree->left && !tree->right)
		return (1); /* calls itself on l&r subtrees of current node */
	/* returned as the size of the binary tree */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
