#include "binary_trees.h"

/**
 *binary_tree_insert_left - Inserts a node as the left-child of another node
 *@parent: Is a pointer to the node to insert the left-child in
 *@value: is the value to store in the new node
 *Return: A pointer to the created node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *current_n;

	if (!parent)
		return (NULL);

	current_n = malloc(sizeof(binary_tree_t));
	if (!current_n)
		return (NULL);

	current_n->n = value;
	current_n->parent = parent;
	current_n->left = NULL;
	current_n->right = NULL;

	current_n->left = parent->left;
	if (current_n->left != NULL)
		current_n->left->parent = current_n;
	parent->left = current_n;

	return (current_n);
}
