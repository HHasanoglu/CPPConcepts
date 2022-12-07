#include "Name.h"
#include "Utils.h"
namespace sdds {
	Name::Name(const char* name)
	{
		if (name)
		{
			m_name = new char[strlen(name) + 1];
			strcpy(m_name, name);
		}
	}
	Name::Name(Name& name)
	{
		m_name = new char[strlen(name.m_name) + 1];
		strcpy(m_name, name.m_name);
	}
	Name& Name::operator=(const Name& RO)
	{
		if (this != &RO)
		{
			delete[] m_name;
			m_name = nullptr;
			if (RO.m_name)
			{
				m_name = new char[strlen(RO.m_name)+1];
				strcpy(m_name, RO.m_name);
			}
		}

		return *this;
	}
	std::ostream& Name::display(std::ostream& coutref)const
	{
		return coutref << m_name;
	}
	std::istream& Name::read(std::istream& cinref)
	{
		char local[128]{};
		delete[] m_name;
		m_name = nullptr;
		cinref.getline(local, 128);
		if (cinref)
		{
			m_name = new char[strlen(local) + 1];
			strcpy(m_name, local);
		}
		return cinref;
	}
	Name::operator const char* () const
	{
		return m_name;
	}
	Name::operator int() const
	{
		return strlen(m_name);
	}
	Name::~Name()
	{
		delete[] m_name;
	}

	std::ostream& operator<<(std::ostream& left, const Name& right) {

		return right.display(left);
	}
	std::istream& operator>>(std::istream& left, Name& right) {

		return right.read(left);
	}
}