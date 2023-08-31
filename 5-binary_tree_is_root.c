#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is root
 * @node: pointer to the node to check
 *
 * Return: 1 if node is root or
 * 0 is node is not root
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
