#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return 0;

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	
	return (left_height > right_height) ? left_height + 1 : right_height + 1;
}

/**
 * binary_tree_balance - measure the balance factor
 * @tree: pointer to the root of the tree
 * Return: the balance factor, 0 if tree NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right_h, left_h, diff;

	if (!tree)
		return (0);

	right_h = (int)binary_tree_height(tree->right);
	left_h = (int)binary_tree_height(tree->left);

	diff = left_h - right_h;

	return (diff);
}
