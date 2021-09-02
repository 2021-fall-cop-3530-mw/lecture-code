#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student
{
	private:
		double gpa;
		std::string fname;
		std::string lname;
	public:
		Student (double gpa, std::string fname, std::string lname);
	friend std::ostream& operator<< (std::ostream& foo, const Student& me);
};

#endif /*_HOME_SBITNER______MW_LECTURE_CODE_WEEK___STUDENT_HPP*/
