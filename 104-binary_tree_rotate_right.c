#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root, *tmp;

	if (!tree || !tree->left)
		return (NULL);

	root = tree->left;/* the new root will be the left child */
	tmp = root->right;
	/* right rotation */
	root->right = tree;
	tree->left = tmp;

	if (tmp)/* if old tree->left->right update its parent */
		tmp->parent = tree;

	tmp = tree->parent;
	tree->parent = root;
	root->parent = tmp;
	if (tmp)
	{
		/* update the parent's child to the new root */
		if (tmp->left == tree)
			tmp->left = root;
		else
			tmp->right = root;
	}

	return (root);
}
