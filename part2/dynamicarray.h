#ifndef _DYNAMICARRAY_H_
#define _DYNAMICARRAY_H_
#include <iostream>

template <class T>
class DynamicArray
{
	private:
		size_t m_size;
		T * m_arr;

	public:
		DynamicArray(size_t size)
		: m_size(size)
		, m_arr(new T[size])
		{
			std::cout << "Array Constructor" << std::endl;
		}
		~DynamicArray()
		{
			delete [] m_arr;
			std::cout << "Array Destructor" << std::endl;
		}

	public:
		void set(int index, T val)
		{
			m_arr[index] = val;
		}
		T get(size_t index) const
		{
			return m_arr[index];
		}
		size_t getSize() const
		{
			return m_size;
		}
		void printArr() const
		{
			for (size_t i = 0; i < m_size; i++)
			{
				std::cout << m_arr[i] << std::endl;
			}
		}

};

#endif
