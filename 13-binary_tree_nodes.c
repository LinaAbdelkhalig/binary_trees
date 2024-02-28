#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at lease 1 child
 * @tree: pointer to the root
 * Return: the number of nodes with >=1 child, 0 if tree NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		num_nodes++;

	num_nodes += binary_tree_nodes(tree->left);
	num_nodes += binary_tree_nodes(tree->right);

	return (num_nodes);
}
