#include "Length.h"

Length::Length(int value)
{
	this->value = value;
}

int Length::getValue() const
{

	return this->value;
}

void Length::SetValue(int z)
{
	this->value = z;
}

bool Length::operator==(const Length& otherRuler)const
{
	return this->value == otherRuler.getValue();
}

bool Length::operator!=(const Length& otherRuler) const
{
	//return this->value != otherRuler.getValue();
	return !(this->value == otherRuler.getValue());
}

bool Length::operator<(const Length& otherRuler) const
{
	return this->value < otherRuler.getValue();
}

bool Length::operator<=(const Length& otherRuler) const
{
	return this->value <= otherRuler.getValue();
}

bool Length::operator>(const Length& x) const
{
	//return this->value > otherRuler.getValue();
	return !(this->value < x.getValue());
}

bool Length::operator>=(const Length& x) const
{
	return this->value >= x.getValue();
}

int Length::operator+(const Length& otherRuler) const
{
	return this->value + otherRuler.getValue();
}

int Length::operator+(const int x) const
{
	return this->value + x;
}

int Length::operator-(const Length& otherRuler) const
{
	return this->value - otherRuler.getValue();
}

int Length::operator*(const Length& otherRuler) const
{
	return this->value * otherRuler.getValue();
}

std::ostream& operator<<(std::ostream& Cout, const Length& otherRuler)
{
	return Cout << otherRuler.getValue();
}

void operator>>(std::istream& Cin, Length& otherRuler)
{
	int value;
	Cin >>value;

	otherRuler.SetValue(value);
}
