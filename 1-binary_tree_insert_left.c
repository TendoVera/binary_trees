#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the 
 * left-child of another node
 * @parent: Is a pointer to the node to insert the left-child in.
 * @value: Is the value to store in the new node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *recent_node;

	if (parent == NULL)
		return (NULL);

	recent_node = binary_tree_node(parent, value);

	if (recent_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		recent_node->left = parent->left;
		parent->left->parent = recent_node;
	}

	parent->left = recent_node;

	return (recent_node);
}
