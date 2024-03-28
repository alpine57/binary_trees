#include "binary_trees.h"

/**
i * binary_tree_is_root - Checks if a node is  root of  binary tree.
 * @node: pointer  the node to check.
 *
 * Return: If the node is a root 
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}

