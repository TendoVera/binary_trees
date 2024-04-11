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

	recent_node = malloc(sizeof(binary_tree_t));

	if (recent_node == NULL)
		return (NULL);

	recent_node->n = value;
	recent_node->parent = parent;
	recent_node->left = parent->left;
	recent_node->right = NULL;

	if (parent->left != NULL)

		parent->left->parent = recent_node;

	parent->left = recent_node;

	return (recent_node);
}

