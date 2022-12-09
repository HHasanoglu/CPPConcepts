#include <iostream>
#ifndef SDDS_INTARRAY_H
#define SDDS_INTARRAY_H
namespace sdds
{
	template<typename T>
class DynArray
{
	T* m_data{};
	unsigned int m_size;
public:
	DynArray(unsigned int size=1);
	DynArray(const DynArray<T>& I); //Copy Constructor
	DynArray<T>& operator=(const DynArray<T>& I); //Copy assignement
	DynArray<T>& operator=(const T DynamicArray[]);
	DynArray<T>& set(const T DynamicArray[], unsigned arraySize);
	~DynArray();

	void Resize(unsigned size);
	int size()const;
	operator bool()const;
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index)const;

	//int& element(unsigned int index);
	//const int& element(unsigned int index)const;
};

template<typename T>
DynArray<T>::DynArray(unsigned int size) {
	if (size == 0) size = 1;
	m_data = new T[size];
	m_size = size; //m_size has garbage value until initialization
}

template<typename T>
DynArray<T>::DynArray(const DynArray& I) :m_size(I.m_size) {
	m_data = new T[m_size];
	for (unsigned int i = 0; m_data && I.m_data && i < m_size; i++)
	{
		m_data[i] = I.m_data[i];
	}
}

template<typename T>
DynArray<T>& DynArray<T>::operator=(const DynArray& I) {
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

template<typename T>
DynArray<T>& DynArray<T>::operator=(const T Array[]) {
	for (int i = 0; i < m_size; i++)
	{
		m_data[i] = Array[i];
	}
	return *this;
}
template<typename T>
DynArray<T>& DynArray<T>::set(const T Array[], unsigned size) {
	Resize(size);
	return *this = Array;
}

template<typename T>
DynArray<T>::~DynArray() {
}

template<typename T>
T& DynArray<T>::operator[](unsigned int index) {
	if (index >= m_size) {
		Resize(index + 1);
	}

	return m_data[index];
}
//const int& IntArray::element(unsigned int index)const
//{
//	return m_data[index % m_size];
//}
template<typename T>
const T& DynArray<T>::operator[](unsigned int index)const
{
	return m_data[index % m_size];
}
template<typename T>
DynArray<T>::operator bool() const
{
	return m_data != nullptr;
}
template<typename T>
void DynArray<T>::Resize(unsigned newSize) {
	if (newSize == 0)newSize = 1;
	T* temp = new T[newSize] {};
	for (unsigned i = 0; temp && m_data && i < newSize && i < m_size; i++)
	{
		temp[i] = m_data[i];
	}
	delete m_data;
	m_data = temp;
	m_size = newSize;
}
template<typename T>
int DynArray<T>::size()const {
	return m_size;
}

}
#endif // !SDDS_INTARRAY_H

