#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the
 * right child of another node.
 * @parent: pointer to the node to insert the right child
 * @value: value to put in the node
 * 
 * Return: pointer to new node or NULL on failure
 * or parent node is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *right_node;

    right_node = (binary_tree_t*) malloc(sizeof(binary_tree_t));
    if (right_node == NULL)
        return (NULL);


    if (parent != NULL && parent->right == NULL)
    {
        right_node->parent = parent;
        parent->right = right_node;
        right_node->n = value;
        right_node->left = NULL;
        right_node->right = NULL;
    
        return (right_node);
    }
    else if (parent != NULL && parent->right != NULL)
    {
        right_node->parent = parent;
        right_node->n = value;
        right_node->right = parent->right;
        parent->right->parent = right_node;
        right_node->left = NULL;
        parent->right = right_node;

        return (right_node);
    }
    
    return (NULL);
}