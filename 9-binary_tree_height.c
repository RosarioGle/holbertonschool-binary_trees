#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height1, height2;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	height1 = binary_tree_height(tree->left);
	height2 = binary_tree_height(tree->right);
	if (height1 > height2)
		return (height1 + 1);
	else
		return (height2 + 1);
}
