#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to sibling node
 *         NULL if node is NULL
 *         NULL if the parent is NULL
 *         NULL if the node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* checks if node is NULL or parent node is NULL */
	if (!node || !node->parent)
		return (NULL); /* returns NULL, nodes are missing */

	if (node == node->parent->left) /* node is not NULL */
		return (node->parent->right); /* returns r child to parent */
	return (node->parent->left); /* returns l child of parent */
}
