#include "binary_trees.h"

/**
 *binary_tree_node -  function creates a binary tree node
 *@parent: is a pointer to the parent node of the node to create
 *@value: is the value to put in the new node
 *Return:  a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = malloc(sizeof(binary_tree_t));

	if (root == NULL)
		return (NULL);

	root->parent = parent;
	root->n = value;
	root->left = NULL;
	root->right = NULL;

	return (root);
}
