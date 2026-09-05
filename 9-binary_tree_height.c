#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
*
* Return: height of the tree if tree is null
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefth = 0;
	size_t righth = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lefth = 1 + binary_tree_height(tree->left);

	if (tree->right)
		righth = 1 + binary_tree_height(tree->right);

	if (lefth > righth)
		return (lefth);

	return (righth);
}
