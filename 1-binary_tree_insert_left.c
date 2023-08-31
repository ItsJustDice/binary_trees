#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value:  is the value to store in the new node
 *
 * Return: A pointer to the created node, NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL); /* Return NULL if parent is NULL */
	/* Define memory for new node */
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL); /* Return NULL if memory allocation fails */
	/* give values to properties of new node */
	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	/* Update parent's left child to be  new node */
	parent->left = new;
	if (new->left)
		new->left->parent = new; /* Update parent of old left-child */
	return (new); /* Return pointer to newly created node */
}
