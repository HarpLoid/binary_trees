#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: pointer to node to check
 *
 * Return: 1 if node is leaf or
 * 0 if node is not a leaf
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}
