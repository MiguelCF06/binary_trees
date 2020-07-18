#include "binary_trees.h"

/**
 *binary_tree_size - measures the size of a binary tree
 *@tree: is a pointer to the root node of the tree
 *Return: The size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size1 = 0, size2 = 0;

	if (!tree)
		return (0);

	size1 = binary_tree_size(tree->left) + 1;
	size2 = binary_tree_size(tree->right);

	return (size1 + size2);
}
