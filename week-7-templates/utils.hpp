#ifndef UTILS_HPP
#define UTILS_HPP

#include <vector>

class Utils
{
	public:
		template <typename MyDataType>
		static void Swap(std::vector<MyDataType>& data, size_t i, size_t j);
};

#endif /*UTILS_HPP*/