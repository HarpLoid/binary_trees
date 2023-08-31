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

	if (tree)
    {
        l = (tree->left) ? binary_tree_balance(tree->left) + 1 : 0;
        r = (tree->right) ? binary_tree_balance(tree->right) + 1 : 0;

        balance_factor = l - r;
    }

    return (balance_factor);
}