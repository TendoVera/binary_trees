#include "binary_trees.h"

/**
 * node_height - Calculates height of a node
 * @node: Pointer to node
 * Return: Height of node
 */

size_t node_height(binary_tree_t *node)
{
	size_t left_height, right_height;

	if (node == NULL)
		return (0);

	left_height = node_height(node->left);
	right_height = node_height(node->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_height - Function measures the height of a binary tree
 * @tree: Pointer to root node of the tree
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = node_height(tree->left);
	right_height = node_height(tree->right);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
