#include "node.hpp"

template <typename T>
Node<T>::Node (T input)
{
	this->payload = input;
}

template <typename T>
T Node<T>::GetValue ()
{
	return this->payload;
}

template class Node<int>;
template class Node<double>;
