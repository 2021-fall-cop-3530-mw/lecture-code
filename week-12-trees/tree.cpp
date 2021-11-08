#include "tree.hpp"

template <typename T>
Tree<T>::Tree ()
{
	this->root = nullptr;
}

template <typename T>
Node<T>* Tree<T>::GetRoot()
{
	return this->root;
}

template <typename T>
void Tree<T>::Insert (T data)
{
	if (this->root == nullptr)
	{
		this->root = new Node<T>(data);
	}
}

template class Tree<int>;
