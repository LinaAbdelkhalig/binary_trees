#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if true, 0 if tree is null
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h == right_h)
	{
		if (tree->left && tree->right)
			return (1);
	}

	return (0);
}
