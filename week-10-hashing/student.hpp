#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student
{
	private:
		int id;
		std::string name;
	public:
		Student (int id, std::string name);
		int GetID () const { return this->id; }
		std::string GetName () const { return this->name; }
		bool operator == (const Student& otherStudent) const;
};

template<>
struct std::hash <Student>
{
	std::size_t operator () (const Student& s) const
	{
		return hash<int>()(s.GetID());
	}
};

#endif /*STUDENT_HPP*/