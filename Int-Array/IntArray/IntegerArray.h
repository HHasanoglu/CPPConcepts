#pragma once
#include <iostream>
class IntegerArray
{
private:
	int size{};
	int* numbers{};

public:

	IntegerArray(int size); //One Argument Constructor
	IntegerArray(const IntegerArray& otherArray); //Copy Constructor
	IntegerArray(IntegerArray&& otherArray)noexcept; //Move Constructor

	//void CopyObject(const IntegerArray& otherArray);
	int length()const;
	void setnumber(int index,int value);
	void GenerateNumbers();
	
	int& operator[](int index);
	IntegerArray& operator+(const IntegerArray& OtherArray);
	IntegerArray& operator=(const IntegerArray& OtherArray) ; //Copy Assignment
	IntegerArray& operator=(IntegerArray&& OtherArray)noexcept; //Move Assignment

	~IntegerArray(); //Destructor
	friend std::ostream& operator<<(std::ostream& COUT, const IntegerArray& otherArray);
};

