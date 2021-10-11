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
void List<T>::DeleteFromFront ()
{
	if (this->front != nullptr)
	{
		Node<T>* temp = this->front;
		this->front = this->front->GetNext();
		delete temp;
	}
}

template <typename T>
void List<T>::InsertAtFront (T value)
{
	// steps 1 & 2
	Node<T>* newNode = new Node<T>(value, this->front);
	// step 3
	this->front = newNode;
}

template <typename T>
std::string List<T>::Print ()
{
	std::ostringstream out;
	Node<T>* currentNode = this->front;
	while (currentNode != nullptr)
	{
		out << currentNode->GetValue();
		currentNode = currentNode->GetNext();
		if (currentNode != nullptr)
		{
			out << ' ';
		}
	}

	return out.str();
}

template class List<int>;
