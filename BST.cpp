/*
 * BST.cpp
 *
 *  Created on: Nov 29, 2017
 *      Author: Jack
 */

#include "BST.h"
#include <iostream>
#include <string>
#include <utility>

using namespace std;


template <typename T>
void BST<T>::insert(node* root, T value)
{
	node* newNode = new node;
	node* tempptr = root; // sets the tempptr to the same node as root.

	if (root == NULL) // if its the first node in the list head is now the newNode
	{
		root = newNode;
	}
	else if (root->data < newNode->data)
	{
		insert(root->left, newNode->data);
	}
	else
	{
		insert(root->right, newNode->data);
	}
}

template <typename T>
bool BST<T>::removeVal()
{
	// remove value
	return true;
}

template <typename T>
bool BST<T>::removeNode()
{
	// removes a node
	return true;
}

template <typename T>
bool BST<T>::removeLeftMostN()
{
	// removes the left most node
	return true;
}

template <typename T>
T BST<T>::find(T value)
{
	node* current = root;

	while (current != nullptr && current->data != value)
	{
		if (value < current->data)
		{
			current = current->left;
		} else
		{
			current = current->right;
		}
	}

	return current;
}

//------------------------------
// Constructors
//------------------------------
template <typename T>
BST<T>::BST()
{
	cout << "constructor initialized" << endl;
	root->left = nullptr;
	root->right = nullptr;
}

template <typename T>
BST<T>::~BST()
{
	// TODO Auto-generated destructor stub
}

//--------------------------------
// Member Functions
//--------------------------------

template <typename T>
void BST<T>::add(T newEntry)
{
	insert(root, newEntry);
}

template <typename T>
void BST<T>::clear()
{
	// todo
	// clears the information from the node?
}

template <typename T>
bool BST<T>::contains(const T& anEntry)
{
	// returns what it contains or if it contains
	return true;
}

template <typename T>
T BST<T>::getEntry(const T& anEntry)
{
	// returns the entered value?
	T someVar;

	return someVar;
}

template <typename T>
int BST<T>::getHeight()
{
	// returns the height of the tree
	return 0;
}

template <typename T>
int BST<T>::getNumNodes() const
{
	// returns the total number of nodes?
	// either by a traversal or incremented counter
	// when a new node is added?
	return 0;
}


template <typename T>
T BST<T>::getRootData()
{
	// returns the root data or something else?
	T someVar;

	return someVar;
}

template <typename T>
bool BST<T>::isEmpty()
{
	//todo
	return true;
}

template <typename T>
bool BST<T>::remove(const T& target)
{
	// returns whether or not the node is data is empty?
	return true;
}

template <typename T>
void BST<T>::setRootData(const T& newData)
{
	// sets the root data obviously
}

//-----------------------------------
// Traversal Methods
//-----------------------------------

template <typename T>
void BST<T>::preorderTraverse(node* ptr)
{
	if (ptr != nullptr)
	{
		cout << ptr->data << " ";
		preorderTraverse(ptr->left);
		preorderTraverse(ptr->right);
	}
}

template <typename T>
void BST<T>::inorderTraverse(node* ptr)
{
	inorderTraverse(ptr->left);
	cout << ptr->data << " ";
	inorderTraverse(ptr->right);
}

template <typename T>
void BST<T>::postorderTraverse(node* ptr)
{
	postorderTraverse(ptr->left);
	postorderTraverse(ptr->right);
	cout << ptr->data << " ";
}







