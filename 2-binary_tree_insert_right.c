#include "binary_trees.h"

/**
 * *binary_tree_insert_right - inserts a node as the right-child
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_child;

	if (parent == NULL)
		return (NULL);

	node_child = binary_tree_node(parent, value);
	if (parent->right == NULL)
	{
		parent->right = node_child;
	}
	else
	{
		node_child->right = parent->right;
		parent->right->parent = node_child;
		parent->right = node_child;
	}
	return (node_child);
}
