#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of a node
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL); /* Return NULL if parent is NULL */
	/* Define memory for the new node */
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL); /* Return NULL if memory placement fails */
	/* Give values to properties of new node */
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	/* Update parent's right child to be new node */
	parent->right = new;
	if (new->right)
		new->right->parent = new; /* Update parent of old rightchild */
	return (new); /* Return pointer to newly created node */
}
