#include "binary_trees.h"

/**
 * node_height - Calculates height of a node
 * @node: Pointer to node
 * Return: Height of node
 */

int node_height(binary_tree_t *node)
{
	int left_height, right_height;

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
 * binary_tree_balance - Measures the balance factor of a tree
 * @tree: Pointer to the root node
 * Return: The balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, balance_factor;

	if (tree == NULL)
		return (0);

	left_height = node_height(tree->left);
	right_height = node_height(tree->right);

	balance_factor = left_height - right_height;

	return (balance_factor);
}
