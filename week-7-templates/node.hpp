#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
class Node
{
	private:
		T payload;
	public:
		Node(T input);
		T GetValue ();
};

#endif /*NODE_HPP*/