#pragma once
#include<iostream>
class IntArray
{
private:
	int size;
	int* array;

public:
	IntArray(int size);//One Argument Constructor
	IntArray(const IntArray& otherArray); //Copy Constructor
	IntArray(IntArray&& OtherArray) noexcept;//Move Constructor

	IntArray& operator=(const IntArray& OtherArray); //Copy Assignment
	IntArray& operator=(IntArray&& OtherArray) noexcept; //Move Assignment
	IntArray operator+(const IntArray& OtherArray);
	int& operator[](int index);

	int length()const;

	~IntArray();//Destructor

    friend std::ostream& operator<<(std::ostream& COUT, const IntArray& otherArray);
};

