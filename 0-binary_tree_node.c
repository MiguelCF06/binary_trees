#include "binary_trees.h"

/**
 *binary_tree_node - Creates a binary tree node
 *@parent: Pointer to the parent node of the node to create
 *@value: is the value to put in the new node
 *Return: A pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_n;

	temp_n = malloc(sizeof(binary_tree_t));

	if (!temp_n)
	{
		return (NULL);
	}

	temp_n->n = value;
	temp_n->parent = parent;
	temp_n->left = NULL;
	temp_n->right = NULL;

	return (temp_n);
}
