#include "IntArray.h"
namespace sdds {
	IntArray::IntArray(unsigned int size) {
		if (size == 0) size = 1;
		m_data = new int[size];
		m_size = size; //m_size has garbage value until initialization
	}

	//IntArray::IntArray(unsigned int size) :m_size(size) {
	//	m_data = new int[size];
	//  //m_size(size)  this syntax m_size is directly initialize to size and does not have garbage value
	//}


	//IntArray::IntArray(unsigned int size) :m_size{ size } {
	//	m_data = new int[size];
	//	m_size = size;
	//}

	IntArray::IntArray(const IntArray& I) :m_size(I.m_size) {
		m_data = new int[m_size];
		for (unsigned int i = 0; m_data && I.m_data && i < m_size; i++)
		{
			m_data[i] = I.m_data[i];
		}
	}

	IntArray& IntArray::operator=(const IntArray& I) {
		if (I && this != &I)
		{
			m_size = I.m_size;
			delete m_data;
			for (unsigned int i = 0; i < m_size; i++)
			{
				m_data[i] = I.m_data[i];
			}
			return *this;
		}
	}

	IntArray::~IntArray() {
	}
	int& IntArray::element(unsigned int index)const
	{
		return m_data[index];
	}

	IntArray::operator bool() const
	{
		return m_data != nullptr;
	}
	int IntArray::size()const{
		return m_size;
	}
}