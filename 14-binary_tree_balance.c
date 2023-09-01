#include "binary_trees.h"

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
	int c = 0;

	if (tree)
	{
		l = (tree->left) ? binary_tree_height(tree->left) + 1 : 0;
		printf("c: %d | l: %ld\n", c += 1, l);
		r = (tree->right) ? binary_tree_height(tree->right) + 1 : 0;
		printf("c: %d | r: %ld\n", c += 1, r);

		balance_factor = (l - r);
		printf("c: %d | b_f: %ld\n", c += 1, balance_factor);
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
	int c = 0;

	if (tree)
	{
		left_height = (tree->left) ? binary_tree_height(tree->left) + 1 : 0;
		printf("c: %d | l: %ld\n", c += 1, left_height);
		right_height = (tree->right) ? binary_tree_height(tree->right) + 1 : 0;
		printf("c: %d | r: %ld\n", c += 1, right_height);

		if (left_height > right_height)
			return (left_height);
		else
			return (right_height);
	}

	return (0);
}

