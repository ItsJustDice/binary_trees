#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Make sure node is NULL or has a parent */
	/* If either condition is true, return 0 (not a root) */
	/* Otherwise, return 1 (is a root) */
	return ((!node || node->parent) ? 0 : 1);
}
