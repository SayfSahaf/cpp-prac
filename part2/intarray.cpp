#include "intarray.h"

IntArray::IntArray(size_t size)
: m_size(size)
, m_arr(new int[size])
{
	std::cout << "Array Constructor" << std::endl;
}

IntArray::~IntArray()
{
	delete [] m_arr;
	std::cout << "Array Destructor" << std::endl;
}

void IntArray::set(size_t index, int val)
{
	m_arr[index] = val;
}

int IntArray::get(size_t index) const
{
	return m_arr[index];
}

int IntArray::getSize() const
{
	return m_size;
}
