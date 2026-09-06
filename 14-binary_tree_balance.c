#include "binary_trees.h"

/**
* tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
*
* Return: height of the tree, 0 if tree is null
*/
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree_height(tree->left);
	right_h = tree_height(tree->right);

	if (left_h > right_h)
		return (1 + left_h);

	return (1 + right_h);
}


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


	left_h = (int)tree_height(tree->left);

	right_h = (int)tree_height(tree->right);

	return (left_h - right_h);
}
