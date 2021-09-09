#include "student.hpp"


Student::Student (double gpa, std::string fname, std::string lname)
{
	this->gpa = gpa;
	this->fname = fname;
	this->lname = lname;
}

std::ostream& operator<< (std::ostream& foo, const Student& me)
{
	foo << me.lname << ", " << me.fname << ": " << me.gpa;

	return foo;
}
