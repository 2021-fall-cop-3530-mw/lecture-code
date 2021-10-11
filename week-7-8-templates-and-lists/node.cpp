#include "node.hpp"

template <typename T>
Node<T>::Node (T input, Node<T>* n)
{
	this->payload = input;
	this->next = n;
}

template <typename T>
T Node<T>::GetValue ()
{
	return this->payload;
}

template <typename T>
Node<T>* Node<T>::GetNext ()
{
	return this->next;
}

template class Node<int>;
template class Node<double>;
