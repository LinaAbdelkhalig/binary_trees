#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *queue[2048], *current;
	size_t front = 0, rear = 0;
	int null_node = 0;

	if (!tree)
		return (0);

	/* level-order traverse without checking if left or right exist */
	queue[rear++] = (binary_tree_t *)tree;
	while (front < rear)
	{
		current = queue[front++];
		if (!current) /* if null node is found, flag it */
			null_node = 1;
		else
		{
			if (null_node)/* if there was a null node: not complete */
				return (0);
			queue[rear++] = current->left;
			queue[rear++] = current->right;
		}
	}

	return (1);
}
