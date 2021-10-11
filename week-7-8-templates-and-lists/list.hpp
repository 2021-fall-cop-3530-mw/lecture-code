#ifndef LIST_HPP
#define LIST_HPP
#include "node.hpp"
#include <string>
#include <sstream>

template <typename T>
class List
{
	private:
		Node<T>* front;
	public:
		List ();
		Node<T>* GetFront ();
		void InsertAtFront (T value);
		std::string Print ();
		// run in Valgrind...what's missing?
};

#endif /*LIST_HPP*/