#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Base case: If tree is NULL or func is NULL, return */
	if (!tree || !func)
		return;
	/* Call provided function on current node's value */
	func(tree->n);
	/* explore continuously the left subtree in preorder */
	binary_tree_preorder(tree->left, func);
	/* explore continuously the right subtree in preorder */
	binary_tree_preorder(tree->right, func);
}
