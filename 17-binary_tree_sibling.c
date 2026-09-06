#include "binary_trees.h"
/**
* binary_tree_sibling - finds the sibling of node
* @node: pointer to the node to find the sibling of
*
* Return: pointer to the sibling node, or null if node or parent null
*	or if node has no sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
