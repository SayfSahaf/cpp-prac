#ifndef _INTARRAY_H_
#define _INTARRAY_H_
#include <iostream>

class IntArray
{
	private:
		size_t m_size;
		int * m_arr;

	public:
		IntArray(size_t size);
		~IntArray();

	public:
		void set(size_t index, int val);
		int get(size_t index) const;
		int getSize() const;

};


#endif
