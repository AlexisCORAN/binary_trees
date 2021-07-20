#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_child;
	
	if(parent == NULL)
		return (NULL);
	
	node_child = binary_tree_node(parent, value);
	

	if(parent->left == NULL)
	{
		parent->left = node_child;
	}
	else
	{
		node_child->left = parent->left;
		parent->left->parent = node_child;
	}
	return(node_child);
}
