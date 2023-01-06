#pragma once
#include<iostream>
class Length
{
private:
	int value;
	

public:

	Length(int value);

	int getValue()const;
	void SetValue(int z);

	bool operator==(const Length& otherRuler)const;
	bool operator!=(const Length& otherRuler)const;
	bool operator<(const Length& otherRuler)const;
	bool operator<=(const Length& otherRuler)const;
	bool operator>(const Length& x)const;
	bool operator>=(const Length& x)const;

	//int operator+(const Length& otherRuler)const;
	int operator+(const int value)const;
	int operator-(const Length& otherRuler)const;
	int operator*(const Length& otherRuler)const;

	friend std::ostream& operator<<(std::ostream& Cout, const Length& otherRuler);
	Length operator+(const Length& otherRuler)const;
	Length& operator+=(const Length& otherRuler);
	explicit operator int()const;


};

std::ostream& operator<<(std::ostream& Cout,const Length& otherRuler);
std::istream& operator>>(std::istream& Cin,Length& otherRuler);

