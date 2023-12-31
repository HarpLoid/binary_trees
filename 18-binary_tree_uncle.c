#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: if node is NULL or parent is NULL
 * or node has no uncle return NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL, *grandpa;

	if (!node || !node->parent)
		return	(NULL);

	grandpa = node->parent->parent;

	if (node && grandpa)
	{
		if (grandpa->left == node->parent)
			uncle = grandpa->right;
		else
			uncle = grandpa->left;
	}

	return (uncle);
}
