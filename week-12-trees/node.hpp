#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
class Node
{
	private:
		T payload;
		Node<T>* left;
		Node<T>* right;
	public:
		Node(T input, Node<T>* l = nullptr, Node<T>* r = nullptr);
		T GetValue ();
		Node<T>* GetLeft ();
		Node<T>* GetRight ();
};

#endif /*NODE_HPP*/