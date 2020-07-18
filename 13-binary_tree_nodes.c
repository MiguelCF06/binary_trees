#include "binary_trees.h"

/**
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: is a pointer to the root node of the tree to count the number of nodes
 *Return: The count of the nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0, count1 = 0, count2 = 0;

	if (!tree)
		return (0);

	if (tree->parent == NULL)
	{
		count1 = binary_tree_nodes(tree->left);
		count2 = binary_tree_nodes(tree->right);
		return (count1 + 1 + count2);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		nodes++;
		return (nodes);
	}

	count1 = binary_tree_nodes(tree->left);
	count2 = binary_tree_nodes(tree->right);

	return (count1 + count2);
}
