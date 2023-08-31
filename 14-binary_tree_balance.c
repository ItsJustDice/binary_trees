#include "binary_trees.h"
/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	/* sumsup variables to keep track of subtrees */
	size_t lef = 0;
	size_t righ = 0;

	if (tree == NULL)
	{
		return (0); /* returns 0 if empty or NULL */
	}
	else
	{
		if (tree)
		{
			/* checks if curret node has a left subtree, adds 1 */
			lef = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			righ = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		} /* returns maxi height with l&R subtrees, using condi opps */
		return ((l > r) ? l : r); /* return height of binary tree */
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/* sums-up 3 variables to note heights &balance factor */
	int r = 0, l = 0, t = 0;

	if (tree)
	{
		/* calculates height of l&r subtrees, casts them to integers */
		l = ((int)binary_tree_height_b(tree->left));
		r = ((int)binary_tree_height_b(tree->right));
		t = l - r; /* calculated by subtraction of height of r from l */
	}
	return (t); /* Returned as balance factor of bineray tree */
}
