#include "binary_trees.h"
/**
* binary_tree_balance - measure the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balace
*
* Return: balance factor, or 0 if tree null
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = (int)binary_tree_height(tree->left);
	right_h = (int)bynary_tree_height(tree->right);

	return (left_h - right_h);
}
