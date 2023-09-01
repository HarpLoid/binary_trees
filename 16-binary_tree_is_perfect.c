#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree
 * is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if perfect otherwise 0 if not perfect
 * or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect = 0;

	if (tree)
	{
		if (binary_tree_balance(tree) == 0 &&
			(binary_tree_nodes(tree->left) == binary_tree_nodes(tree->right)))
		{
			perfect = 1;
		}
	}

	return (perfect);
}

/**
 * binary_tree_balance - measures the balance
 * factor of the binary tree
 * @tree: pointer to the root node of the tree
 * to measure the balance factor
 *
 * Return: balance factor of tree or 0 if
 * tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l = 0, r = 0, balance_factor = 0;

	if (tree)
	{
		l = (tree->left) ? binary_tree_height(tree->left) + 1 : 0;
		r = (tree->right) ? binary_tree_height(tree->right) + 1 : 0;

		balance_factor = (l - r);

	}

	return (balance_factor);
}

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

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of Node or 0 if tree is null
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			nodes += 1;
		else
			nodes = 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}