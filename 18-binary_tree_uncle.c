#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: the nodaia
 * Return: NULL if node or the parent is null or no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (!node || !node->parent)
		return (NULL);

	if (parent->left == node) /*if the node is on left*/
		return (parent->right); /*return if it has right sibling*/
	else /*else the node is on the right*/
		return (parent->left); /*return if it has left sibling*/

}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: the nephew/niece
 * Return: pointer to the uncle else NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (!node)
		return (NULL);
	return (binary_tree_sibling(parent));
}
