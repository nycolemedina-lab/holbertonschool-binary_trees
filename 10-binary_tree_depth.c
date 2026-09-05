#include "binary_trees.h"
/**
* binary_tree_depth - measurs the depth of a binary tree
* @tree: pointer to the node to measure the depth
*
* Return: depth of the node, of 0 if tree is null or is the root
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
