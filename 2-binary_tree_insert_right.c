#include "binary_trees.h"

/**
 *binary_tree_insert_right - Inserts a node as the right-child of another node
 *@parent: is a pointer to the node to insert the right-child in
 *@value: is the value to store in the new node
 *Return: A pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *current_n;

	if (!parent)
		return (NULL);

	current_n = malloc(sizeof(binary_tree_t));
	if (!current_n)
		return (NULL);

	current_n->n = value;
	current_n->left = NULL;
	current_n->right = NULL;

	if (parent->right != NULL)
	{
		current_n->right = parent->right;
		current_n->right->parent = current_n;
		current_n->parent = parent;
		parent->right = current_n;
	}
	else
	{
		parent->right = current_n;
		current_n->parent = parent;
	}

	return (current_n);
}
