#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return; /* Base case: if tree is NULL, nothing to delete */
	/*Delete the right subtree effectively */
	binary_tree_delete(tree->right);
	/* Delete the left subtree effectively */
	binary_tree_delete(tree->left);
	/* Free memory given for current node */
	free(tree);
}
