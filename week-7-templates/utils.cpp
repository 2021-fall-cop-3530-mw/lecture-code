#include "utils.hpp"
 
template <typename MyDataType>
void Utils::Swap(std::vector<MyDataType>& data, size_t i, size_t j)
{
	MyDataType temp = data[i];
	data[i] = data[j];
	data[j] = temp;
	// works with integers
	//data[i] ^= data[j];
	//data[j] ^= data[i];
	//data[i] ^= data[j];
}

template void Utils::Swap(std::vector<int>& data, size_t i, size_t j);
template void Utils::Swap(std::vector<double>& data, size_t i, size_t j);
