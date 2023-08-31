#include "binary_trees.h"
/**
 * binary_tree_node - Creates new binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to put in the new node
 * Return: pointer to new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* annocement of nNode with data type */
	binary_tree_t *nNode;

	/* create  memory space for node */
	nNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (nNode == NULL)
	{
		return (NULL); /* Return NULL if memory placement fails */
	}
	/* define values to properties of node */
	nNode->parent = parent;
	nNode->n = value;
	nNode->left = NULL;
	nNode->right = NULL;
	/* return pointer to node */
	return (nNode);
}
