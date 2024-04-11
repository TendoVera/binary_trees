#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least 1 child in the tree
 * @tree: Pointer to the root node
 * Return: Number of nodes with a child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_child_count, right_child_count, count, total;

	count = 0;
	total = 0;

	if (tree == NULL)
		return (0);

	left_child_count = binary_tree_nodes(tree->left);
	right_child_count = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	total = left_child_count + right_child_count + count;

	return (total);
}
