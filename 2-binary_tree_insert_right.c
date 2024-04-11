#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the 
 * right-child of another node
 * @parent: Is a pointer to the node to insert the right-child in.
 * @value: Is the value to store in the new node.
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *recent_node;

	if (parent == NULL)
		return (NULL);

	recent_node = malloc(sizeof(binary_tree_t));

	if (recent_node == NULL)
                return (NULL);

	recent_node->n = value;
        recent_node->parent = parent;
        recent_node->left = NULL;
        recent_node->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = recent_node;

	parent->right = recent_node;
	return (recent_node);
}
