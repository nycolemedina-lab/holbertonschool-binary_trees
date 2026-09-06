#include "binary_trees.h"
/**
* tree_height - measure of a binary tree in node
* @tree: pointer to root node
* Return: height in node, 0 if tree is null
*/
size_t tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);
	lh = tree_height(tree->left);
	rh = tree_height(tree->right);
	return (1 + (lh > rh ? lh : rh));
}

/**
* binary_tree_is_perfect - check if a binary tree is perfect
* @tree: pointer to root node
* Return: 1 if perfrct, 0 if tree is null or not perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	if (tree_height(tree->left) == tree_height(tree->right))
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	return (0);
}
