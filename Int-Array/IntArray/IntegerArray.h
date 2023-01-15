#pragma once
#include<iostream>
class IntegerArray
{
private:
	int size;
	int* numbers;

public:
	IntegerArray(int size);//One Argument Constructor
	IntegerArray(const IntegerArray& otherArray); //Copy Constructor
	IntegerArray(IntegerArray&& OtherArray) noexcept;//Move Constructor

	//void CopyObject(const IntegerArray& otherArray);
	int length()const;
	void setnumber(int index, int value);
	void GenerateNumbers();

	IntegerArray& operator=(const IntegerArray& OtherArray); //Copy Assignment
	IntegerArray& operator=(IntegerArray&& OtherArray) noexcept; //Move Assignment
	IntegerArray operator+(const IntegerArray& OtherArray);
	int& operator[](int index);

	~IntegerArray();//Destructor

    friend std::ostream& operator<<(std::ostream& COUT, const IntegerArray& otherArray);
};

