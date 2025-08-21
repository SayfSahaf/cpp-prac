#include "intarray.h"

IntArray::IntArray(size_t size)
: m_size(size)
, m_arr(new int[size])
{
	std::cout << "Array Constructor" << std::endl;
}
