#include "binary_trees.h"
<<<<<<< HEAD
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
 
=======

/**
 * binary_tree_insert_left - A function that inserts a node as the left child
 * @parent: is a pointer to the node to insert the left-child
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or
 * if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
>>>>>>> a96b44736643bfa52b81c4d3280eae5a339fc21f
