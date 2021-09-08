#include "foo.hpp"

Foo::Foo ()
{
	this->words = new std::string[10];
}
Foo::~Foo ()
{
	delete [] this->words;
}
