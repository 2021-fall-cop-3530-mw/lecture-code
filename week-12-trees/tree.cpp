#include "tree.hpp"

template <typename T>
Tree<T>::Tree ()
{
	this->root = nullptr;
}

template <typename T>
Tree<T>::~Tree ()
{
	this->DeleteSubtree(this->root);
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

template <typename T>
void Tree<T>::DeleteSubtree(Node<T>* subtreeRoot)
{
	if (subtreeRoot == nullptr)
	{
		return;
	}
	this->DeleteSubtree(subtreeRoot->GetLeft());
	this->DeleteSubtree(subtreeRoot->GetRight());
	delete subtreeRoot;
}

template <typename T>
Node<T>* Tree<T>::Search (T searchKey)
{
	return this->Search(this->root, searchKey);
}

template <typename T>
Node<T>* Tree<T>::Search (Node<T>* subtreeRoot, T searchKey)
{
	if (subtreeRoot == nullptr) // didn't find it
	{
		return nullptr;
	}
	else if (subtreeRoot->GetValue() == searchKey) // found it
	{
		return subtreeRoot;
	}

	if (searchKey < subtreeRoot->GetValue())
	{
		return this->Search(subtreeRoot->GetLeft(), searchKey);
	}
	else
	{
		return this->Search(subtreeRoot->GetRight(), searchKey);
	}
}


template class Tree<int>;
