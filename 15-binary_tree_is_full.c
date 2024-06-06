#include "binary_trees.h"

/**
 * is_full_rec - Checks if a binary tree is full recursively
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 If tree is not full.
 */
int is_full_rec(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_rec(tree->left) == 0 ||
		    is_full_rec(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 If tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_rec(tree));
}
