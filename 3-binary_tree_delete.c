#include "binary_trees.h"

/**
 * binary_tree_delete - delete a node
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return;
    }
    else
    {
        if (tree != NULL){
            binary_tree_delete(tree->right);
            binary_tree_delete(tree->left);
        }

        free(tree);
    }
}
