#ifndef SDDS_INTARRAY_H
#define SDDS_INTARRAY_H
namespace sdds
{

class IntArray
{
	int* m_data{};
	unsigned int m_size;
public:
	IntArray(unsigned int size=1);
	IntArray(const IntArray& I); //Copy Constructor
	IntArray& operator=(const IntArray& I); //Copy assignement
	~IntArray();

	int size()const;
	operator bool()const;
	int& operator[](unsigned int index);
	const int& operator[](unsigned int index)const;
	void Resize(unsigned size);

	//int& element(unsigned int index);
	//const int& element(unsigned int index)const;
};

}
#endif // !SDDS_INTARRAY_H

