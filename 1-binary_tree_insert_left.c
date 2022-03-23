#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	if (!parent)
		return (NULL);

	tmp = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (!tmp)
		return (NULL);

	tmp->n = value;
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->parent = NULL;

	if (parent->left != NULL)
	{
		tmp->left = parent->left;
		parent->left->parent = tmp;
		parent->left = tmp;
		tmp->parent = parent;
	}
	else
	{
		tmp->parent = parent;
		parent->left = tmp;
	}
	return (tmp);
}
