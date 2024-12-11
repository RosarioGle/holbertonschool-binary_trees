#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		left_height = binary_tree_height(tree->left);
		left_height++;
	}
	if (tree->right)
	{
		right_height = binary_tree_height(tree->right);
		right_height++;
	}
	return (left_height - right_height);
}
