#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *uncle;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->parent == NULL)
		return (NULL);
	uncle = parent->parent;
	if (uncle->left == parent)
		return (uncle->right);
	if (uncle->right == parent)
		return (uncle->left);
	return (NULL);
}
