#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree using post-order traverse
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Base case: If tree is NULL or func is NULL, return */
	if (!tree || !func)
		return;
	/* explore continuously the left subtree in postorder */
	binary_tree_postorder(tree->left, func);
	/* explore continuously the right subtree in postorder */
	binary_tree_postorder(tree->right, func);
	/* Call provided function on current node's value */
	func(tree->n);
}
