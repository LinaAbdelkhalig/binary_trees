#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 * Return: a pointer to new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *root, *tmp;

	if (!tree || !tree->right)
		return (NULL);

	root = tree->right;/* the new root is the right child */
	tmp = root->left;
	/* left rotation */
	root->left = tree;
	tree->right = tmp;

	if (tmp)/* if tree->right->left make tree its new parent */
		tmp->parent = tree;

	tmp = tree->parent;
	tree->parent = root;/* make the old root a child of new root */
	root->parent = tmp;/* make the new root a child of the old root parent */
	if (tmp)
	{
		/* update the parent child to the new root */
		if (tmp->left == tree)
			tmp->left = root;
		else
			tmp->right = root;
	}

	return (root);
}
