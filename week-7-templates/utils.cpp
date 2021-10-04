#include "utils.hpp"
 
void Utils::Swap(std::vector<int>& data, size_t i, size_t j)
{
	int temp = data[i];
	data[i] = data[j];
	data[j] = temp;
}
