#include "binary_trees.h"

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: is a pointer to the root node of the tree
 *Return: The height of the tree if is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
	{
		binary_tree_height(tree->left);
		height++;
	}
	if (tree->right != NULL)
	{
		binary_tree_height(tree->right);
		height++;
	}
	return (height);
}
