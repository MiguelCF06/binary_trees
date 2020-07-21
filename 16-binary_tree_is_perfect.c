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
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (left + 1);
	return (right + 1);
}

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

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: is a pointer to the root node of the tree to check
 *Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left - right == 0 || binary_tree_leaves(tree) == 0)
		return (1);

	return (0);
}
