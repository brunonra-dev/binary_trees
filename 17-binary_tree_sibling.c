#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: If node is NULL or the parent is NULL, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left && parent->right)
	{
		if (parent->left->n == node->n)
			return (parent->right);
		return (parent->left);
	}
	return (NULL);
}
