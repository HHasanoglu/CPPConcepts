#include "IntegerArray.h"

IntegerArray::IntegerArray(int size)
{
	this->size = size;
	numbers = new int[size] {0};
}

IntegerArray::IntegerArray(const IntegerArray& otherArray)
{
	
	this->size = otherArray.size;
	numbers = new int[otherArray.size]{ 0 };
	for (int i = 0; i < otherArray.size; i++)
	{
		numbers[i] = otherArray.numbers[i];
	}
}

IntegerArray::IntegerArray(IntegerArray&& otherArray) noexcept
{
	this->size = otherArray.size;
	this->numbers = otherArray.numbers;
	otherArray.numbers = nullptr;
}


IntegerArray::~IntegerArray()
{
	delete[] numbers;
}

int IntegerArray::length()const
{
	return size;
}

void IntegerArray::setnumber(int index,int value)
{
	numbers[index] = value;
}

int& IntegerArray::operator[](int index)
{
	return numbers[index];
}

IntegerArray& IntegerArray::operator+(const IntegerArray& OtherArray)
{
	IntegerArray temporaryArray(size + OtherArray.size);
	int i = 0;
	for (; i < size; i++)
	{
		temporaryArray.numbers[i] = numbers[i];
	}

	for (int j = 0; j < OtherArray.size; j++,i++)
	{
		temporaryArray.numbers[i] = numbers[j];
	}

	return temporaryArray;
}

IntegerArray& IntegerArray::operator=(const IntegerArray& otherArray)
{
	delete[] numbers;
	numbers = nullptr;

	this->size = otherArray.size;
	numbers = new int[otherArray.size]{ 0 };
	for (int i = 0; i < otherArray.size; i++)
	{
		numbers[i] = otherArray.numbers[i];
	}
	return *this;
}

IntegerArray& IntegerArray::operator=(IntegerArray&& otherArray) noexcept
{
	this->size = otherArray.size;
	this->numbers = otherArray.numbers;
	otherArray.numbers = nullptr;

	return *this;
}



void IntegerArray::GenerateNumbers()
{
	for (int i = 0; i < size; i++)
	{
		/*numbers1.setnumber(i, 3 * i);*/
		numbers[i] = 3 * i;
	}
}

std::ostream& operator<<(std::ostream& COUT, const IntegerArray& otherArray)
{
	for (int i = 0; i < otherArray.size; i++)
	{
		COUT << otherArray.numbers[i]<<" ";
	}
	COUT << std::endl;
	return COUT;
}
