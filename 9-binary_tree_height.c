#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree or
 * 0 if  tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree)
	{
		left_height = (tree->left) ? binary_tree_height(tree->left) + 1 : 0;
		right_height = (tree->right) ? binary_tree_height(tree->right) + 1 : 0;

		if (left_height > right_height)
			return (left_height);
		else
			return (right_height);
	}

	return (0);
}
