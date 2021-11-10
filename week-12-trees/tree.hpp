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

	public:
		Tree ();
		Node<T>* GetRoot();
		void Insert (T data);
		std::string Print ();
};

#endif /*TREE_HPP*/
