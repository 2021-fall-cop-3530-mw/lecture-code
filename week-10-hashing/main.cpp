#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "student.hpp"
#include <unordered_set>

int main ()
{
	Student aT(12345, "Alan Turing");

	std::unordered_set<Student> roster;

	roster.insert(aT);

	Student aL(12345, "Ada Lovelace");
	roster.insert(aL);

	std::cout << roster.find(aL)->GetName() << std::endl;
	std::cout << roster.find(aT)->GetName() << std::endl;
	return 0;
}
