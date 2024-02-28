#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node
 * Return: the number of the leaves in the tree, 0 if tree NUll
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_count = binary_tree_leaves(tree->left); /*pass nodes till 1*/
	right_count = binary_tree_leaves(tree->right);

	return (left_count + right_count);
}
