#include "IntArray.h"

IntArray::IntArray(int size)
{
	this->size = size;
	array = new int[size] {};
}

IntArray::IntArray(const IntArray& otherArray)
{
	size = otherArray.size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = otherArray.array[i];
	}
}

IntArray::IntArray(IntArray&& OtherArray)noexcept
{
	size = OtherArray.size;
	array = OtherArray.array;
	OtherArray.array=nullptr;
}

IntArray& IntArray::operator=(const IntArray& OtherArray)
{
	if (this==&OtherArray)
	{
		return *this;
	}

	size = OtherArray.size;
	delete[] array;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = OtherArray.array[i];
	}
	return *this;
}

IntArray& IntArray::operator=(IntArray&& OtherArray) noexcept
{
	size = OtherArray.size;
	array = OtherArray.array;
	OtherArray.array = nullptr;
	return *this;
}

IntArray IntArray::operator+(const IntArray& OtherArray)
{
	IntArray Temp(size + OtherArray.size);
	int i = 0;
	for (; i < size; i++)
	{
		Temp[i] = array[i];
	}

	for (int j = 0; j < OtherArray.size; j++,i++)
	{
		Temp[i] = OtherArray.array[j];
	}

	return Temp;
}

int& IntArray::operator[](int i)
{
	return array[i];
}

int IntArray::length() const
{
	return size;
}

IntArray::~IntArray()
{
	delete[] array;
}

std::ostream& operator<<(std::ostream& COUT, const IntArray& otherArray)
{
	for (int i = 0; i < otherArray.size; i++)
	{
		COUT << otherArray.array[i] << " ";
	}
	COUT << std::endl;
	return COUT;
}
