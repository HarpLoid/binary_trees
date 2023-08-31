#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: if node is NULL or parent is NULL
 * or node has no sibling return NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node && node->parent)
	{
		if (node->parent->left == node)
			sibling = node->parent->right;
		else
			sibling = node->parent->left;
	}

	return (sibling);
}
