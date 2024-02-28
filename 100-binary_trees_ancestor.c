#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the nodes
 *	   NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *parent1, *parent2;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	parent1 = first->parent;
	parent2 = second->parent;
	if (first == parent2 || !parent1 || (!parent1->parent && parent2))
		return (binary_trees_ancestor(first, parent2));
	else if (second == parent1 || !parent2 || (!parent2->parent && parent1))
		return (binary_trees_ancestor(parent1, second));
	return (binary_trees_ancestor(parent1, parent2));
}
