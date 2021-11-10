#ifndef TREE_HPP
#define TREE_HPP
#include "node.hpp"
#include <string>
#include <sstream>

template <typename T>
class Tree
{
	private:
		Node<T>* root;
		std::string Print (Node<T>* subtreeRoot);
		void DeleteSubtree(Node<T>* subtreeRoot);
		Node<T>* Search (Node<T>* subtreeRoot, T searchKey);

	public:
		Tree ();
		~Tree ();
		Node<T>* GetRoot();
		void Insert (T data);
		std::string Print ();
		Node<T>* Search (T searchKey);
};

#endif /*TREE_HPP*/
