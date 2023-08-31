#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Make sure that node is NULL or has at least one child */
	/* If either condition is true, return 0 (not a leaf) */
	/* Otherwise, return 1 (is a leaf) */
	return ((!node || node->left || node->right) ? 0 : 1);
}
