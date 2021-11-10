#include "node.hpp"

template <typename T>
Node<T>::Node (T input, Node<T>* l, Node<T>* r)
{
	this->payload = input;
	this->left = l;
	this->right = r;
}

template <typename T>
T Node<T>::GetValue ()
{
	return this->payload;
}

template <typename T>
Node<T>* Node<T>::GetLeft ()
{
	return this->left;
}

template <typename T>
Node<T>* Node<T>::GetRight ()
{
	return this->right;
}

template <typename T>
void Node<T>::SetLeft (Node<T>* newLeft)
{
	this->left = newLeft;
}

template <typename T>
void Node<T>::SetRight (Node<T>* newRight)
{
	this->right = newRight;
}

template class Node<int>;
template class Node<double>;
