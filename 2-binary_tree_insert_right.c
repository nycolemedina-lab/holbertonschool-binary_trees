#include "binary_trees.h"
/**
* binary_tree_insert_right - insert a new node as the right child of a node
* @parent: pointer to the node to insert the left child in
* @value: value to be stored in the new node
*
* Return: pointer to the created node, NULL on failure or parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node-right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
