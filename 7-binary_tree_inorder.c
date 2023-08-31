#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Base case: If tree is NULL or func is NULL, return */
	if (!tree || !func)
		return;
	/* explore continuously the left subtree in inorder */
	binary_tree_inorder(tree->left, func);
	/* Call provided function on current node's value */
	func(tree->n);
	/* explore continuously the right subtree in inorder */
	binary_tree_inorder(tree->right, func);
}
