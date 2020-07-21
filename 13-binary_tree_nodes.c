#include "binary_trees.h"

/**
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: is a pointer to the root node of the tree to count the number of nodes
 *Return: The count of the nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count1 = 0, count2 = 0;

	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);

	count1 = binary_tree_nodes(tree->left);
	count2 = binary_tree_nodes(tree->right);

	return (count1 + count2 + 1);
}
