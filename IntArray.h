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

	int& element(unsigned int index)const;
	operator bool()const;
	int size()const;

private:

};

}
#endif // !SDDS_INTARRAY_H

