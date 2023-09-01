#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the
 * left child of another node.
 * @parent: pointer to the node to insert the left child
 * @value: value to put in the node
 *
 * Return: pointer to new node or NULL on failure
 * or parent node is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (!parent)
		return (NULL);

	left_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);


	if (parent != NULL && parent->left == NULL)
	{
		left_node->parent = parent;
		parent->left = left_node;
		left_node->n = value;
		left_node->left = NULL;
		left_node->right = NULL;
	}
	else if (parent != NULL && parent->left != NULL)
	{
		left_node->parent = parent;
		left_node->n = value;
		left_node->left = parent->left;
		parent->left->parent = left_node;
		left_node->right = NULL;
		parent->left = left_node;
	}

	return (left_node);
}
