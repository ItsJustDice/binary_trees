#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* If tree is NULL or has no parent, return depth 0 */
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
	/* If tree is not NULL and has a parent, continuously  calculate depth */
	/* by moving up the tree towards the root and adding 1 for each level */
}
