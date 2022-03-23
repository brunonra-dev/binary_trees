#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value:  value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	if (!parent)
		return (NULL);

	tmp = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (!value)
		return (NULL);

	if (!tmp)
		return (NULL);

	tmp->n = value;
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->parent = NULL;

	if (parent->right != NULL)
	{
		tmp->right = parent->right;
		parent->right->parent = tmp;
		parent->right = tmp;
		tmp->parent = parent;
	}
	else
	{
		tmp->parent = parent;
		parent->right = tmp;
	}
	return (tmp);
}
