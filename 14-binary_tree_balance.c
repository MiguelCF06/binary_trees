#include "binary_trees.h"

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: is a pointer to the root node of the tree
 *Return: The height of the tree if is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (left + 1);
	return (right + 1);
}

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: pointer to the root node of the tree to measure the balance factor
 *Return: The balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightLeft = 0, heightRight = 0;

	if (!tree)
		return (0);

	heightLeft = binary_tree_height(tree->left);
	heightRight = binary_tree_height(tree->right);

	return (heightLeft - heightRight);
}
