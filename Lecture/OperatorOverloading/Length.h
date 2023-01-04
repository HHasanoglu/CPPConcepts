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

	int operator+(const Length& otherRuler)const;
	int operator+(const int value)const;
	int operator-(const Length& otherRuler)const;
	int operator*(const Length& otherRuler)const;

};

//int operator/(const Length& otherRuler1,const Length& otherRuler2);
std::ostream& operator<<(std::ostream& Cout,const Length& otherRuler);
void operator>>(std::istream& Cin,Length& otherRuler);

