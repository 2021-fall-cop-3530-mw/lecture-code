#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
class Node
{
	private:
		T payload;
		Node<T>* next;
	public:
		Node(T input, Node<T>* n = nullptr);
		T GetValue ();
		Node<T>* GetNext ();
};

#endif /*NODE_HPP*/