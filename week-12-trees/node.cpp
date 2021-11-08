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

template class Node<int>;
template class Node<double>;
