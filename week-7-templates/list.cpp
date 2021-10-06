#include "list.hpp"

template <typename T>
List<T>::List ()
{
	this->front = nullptr;
}

template <typename T>
Node<T>* List<T>::GetFront ()
{
	return this->front;
}


template <typename T>
void List<T>::InsertAtFront (T value)
{
	// steps 1 & 2
	Node<T>* newNode = new Node<T>(value, this->front);
	// step 3
	this->front = newNode;
}

template class List<int>;
