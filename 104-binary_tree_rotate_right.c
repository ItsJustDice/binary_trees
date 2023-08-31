#include "binary_trees.h"
/**
 * binary_tree_rotate_right - Function that  rotates right the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *blk;
	/* checks if input tree is NULL */
	if (tree == NULL || tree->left == NULL)
	{
		return (NULL); /* return 0 if empty or NULL */
	}
	blk = tree->left; /* code proceeds with rotation if not NULL */
	tree->left = blk->right; /* l is updated to r, if r is blk, update P */
	if (blk->right != NULL)
	{
		/* r child of blk is tree, P is updated to blk */
		blk->right->parent = tree;
	}
	blk->right = tree;
	blk->parent = tree->parent;
	tree->parent = blk;
	return (blk); /* returns blk as new root of binary tree */
}
