#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a BST
 * @tree: a double pointer to the root node of the BST to insert the value
 * @value: the value to store in the node to be inserted
 * Return: pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp, *new_node;

	if (!tree)
		return (NULL);

	tmp = *tree;
	if (!tmp) /* empty tree */
	{
		new_node = binary_tree_node(tmp, value);
		if (!new_node)
			return (NULL);
		*tree = new_node;
		return (*tree);
	}

	if (value > tmp->n) /* go right */
	{
		if (tmp->right)
			return (bst_insert(&tmp->right, value));

		new_node = binary_tree_node(tmp, value);
		if (!new_node)
			return (NULL);
		tmp->right = new_node;
		return (tmp->right);
	}

	if (value < tmp->n) /* go left */
	{
		if (tmp->left)
			return (bst_insert(&tmp->left, value));

		new_node = binary_tree_node(tmp, value);
		tmp->left = new_node;
		return (tmp->left);
	}

	return (NULL);
}
