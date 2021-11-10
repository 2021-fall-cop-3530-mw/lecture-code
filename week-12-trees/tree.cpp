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
		return;
	}

	Node<T>* currentNode = this->root;
	while (currentNode != nullptr)
	{
		if (data < currentNode->GetValue()) // go left
		{
			if (currentNode->GetLeft() == nullptr)
			{
				currentNode->SetLeft(new Node<T>(data));
				return;
			}
			currentNode = currentNode->GetLeft();
		}
		else // go right
		{
			if (currentNode->GetRight() == nullptr)
			{
				currentNode->SetRight(new Node<T>(data));
				return;
			}
			currentNode = currentNode->GetRight();
		}
	}
}

template <typename T>
std::string Tree<T>::Print ()
{
	return this->Print(this->root);
}

template <typename T>
std::string Tree<T>::Print (Node<T>* subtreeRoot)
{
	if (subtreeRoot == nullptr)
	{
		return "";
	}
	std::ostringstream out;
	out << this->Print(subtreeRoot->GetLeft());
	out << subtreeRoot->GetValue() << ' ';
	out << this->Print(subtreeRoot->GetRight());

	return out.str();
}

template class Tree<int>;
