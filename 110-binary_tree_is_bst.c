#include "binary_trees.h"
#include <limits.h>

int bst(const binary_tree_t *tree, int low, int high);

/**
 * binary_tree_is_bst - checks if a binary tree is a valid binary search tree
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise.
 *	   If tree is NULL, return 0.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bst(tree, INT_MIN, INT_MAX));
}

/**
 * bst - recursive function to check if tree is BST
 * @tree: a pointer to the tree
 * @low: the lowest visited node
 * @high: the highest visited node
 * Return: 1 if tree is a valid BST, 0 otherwise.
 */
int bst(const binary_tree_t *tree, int low, int high)
{
	if (!tree)
		return (1);

	if (tree->n < low || tree->n > high)
		return (0);
	return (bst(tree->left, low, tree->n - 1) &&
		bst(tree->right, tree->n + 1, high));
}
