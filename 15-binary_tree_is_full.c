#include "binary_trees.h"

/**
 *binary_tree_is_full - checks if a binary tree is full
 *@tree: is a pointer to the root node of the tree
 *Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}
