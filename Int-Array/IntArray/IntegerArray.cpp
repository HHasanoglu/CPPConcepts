#include "IntegerArray.h"

IntegerArray::IntegerArray(int size)
{
	this->size = size;
	numbers = new int[size] {};
}

IntegerArray::IntegerArray(const IntegerArray& otherArray)
{
	size = otherArray.size;
	numbers = new int[size];
	for (int i = 0; i < size; i++)
	{
		numbers[i] = otherArray.numbers[i];
	}
}
void IntegerArray::GenerateNumbers()
{
	for (int i = 0; i < size; i++)
	{
		/*numbers1.setnumber(i, 3 * i);*/
		numbers[i] = 3 * i;
	}
}
void IntegerArray::setnumber(int index, int value)
{
	numbers[index] = value;
}

IntegerArray::IntegerArray(IntegerArray&& OtherArray)noexcept
{
	size = OtherArray.size;
	numbers = OtherArray.numbers;
	OtherArray.numbers=nullptr;
}

IntegerArray& IntegerArray::operator=(const IntegerArray& OtherArray)
{
	if (this==&OtherArray)
	{
		return *this;
	}

	size = OtherArray.size;
	delete[] numbers;
	numbers = new int[size];
	for (int i = 0; i < size; i++)
	{
		numbers[i] = OtherArray.numbers[i];
	}
	return *this;
}

IntegerArray& IntegerArray::operator=(IntegerArray&& OtherArray) noexcept
{
	size = OtherArray.size;
	numbers = OtherArray.numbers;
	OtherArray.numbers = nullptr;
	return *this;
}

IntegerArray IntegerArray::operator+(const IntegerArray& OtherArray)
{
	IntegerArray Temp(size + OtherArray.size);
	int i = 0;
	for (; i < size; i++)
	{
		Temp[i] = numbers[i];
	}

	for (int j = 0; j < OtherArray.size; j++,i++)
	{
		Temp[i] = OtherArray.numbers[j];
	}

	return Temp;
}

int& IntegerArray::operator[](int i)
{
	return numbers[i];
}

int IntegerArray::length() const
{
	return size;
}

IntegerArray::~IntegerArray()
{
	delete[] numbers;
}

std::ostream& operator<<(std::ostream& COUT, const IntegerArray& otherArray)
{
	for (int i = 0; i < otherArray.size; i++)
	{
		COUT << otherArray.numbers[i] << " ";
	}
	COUT << std::endl;
	return COUT;
}
