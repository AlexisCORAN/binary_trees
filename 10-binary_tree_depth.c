#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		depth = binary_tree_depth(tree->parent);
	}
	return (depth + 1);
}
