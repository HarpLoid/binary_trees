#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if the binary
 * tree is full
 * @tree: pointer to the root node
 * of the tree to check
 *
 * Return: 1 if tree is full
 * or 0 if tree is not full
 * or tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    int is_full;

    if (tree)
    {
        is_full = ((tree->left && !tree->right) || (!tree->left && tree->right)
                   || !binary_tree_is_full(tree->left)
                   || !binary_tree_is_full(tree->right))
                   ? 0 : 1; 
    }

    return (is_full);
}