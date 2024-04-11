#include "binary_trees.h"

/**
 * binary_tree_node - Is a function that creates a binary tree node.
 * @parent: Is a pointer to the parent node of the node to create.
 * @value:  Is the value to put in the new node.
 * Return: A pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *recent_node;

	recent_node = malloc(sizeof(binary_tree_t));

	if (recent_node == NULL)
		return (NULL);

	recent_node->n = value;
	recent_node->parent = parent;
	recent_node->left = NULL;
	recent_node->right = NULL;

	return (recent_node);
}

