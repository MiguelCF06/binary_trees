#include "binary_trees.h"

/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *@tree:  is a pointer to the root node of the tree to count the number of lvs.
 *Return: The amount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, count1 = 0, count2 = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		leaves++;
		return (leaves);
	}

	count1 = binary_tree_leaves(tree->left);
	count2 = binary_tree_leaves(tree->right);

	return (count1 + count2);
}
