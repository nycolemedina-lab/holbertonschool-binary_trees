#include "binary_trees.h"
/**
* binary_tree_nodes - count the node with at least i child
* @tree: pointer to the root node of the tree to count the nodes in
*
* Return: number of nodes with at least 1 child, or 0 if tree null
*
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}
