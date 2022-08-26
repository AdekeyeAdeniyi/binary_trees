#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent node of the node to create
 * @value:Value to put in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is
 * NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = NULL;

	if  (parent == NULL)
        return (NULL);

    newNode = binary_tree_node(parent, value);

    if  (newNode == NULL)
        return NULL;

    if  (parent->left != NULL)
    {
        newNode->left = parent->left;
        parent->left = newNode;
    }
    parent->left = newNode;

    return  (newNode);
}
