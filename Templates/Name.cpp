#include "Name.h"
#include "Utils.h"
namespace sdds {

	Name::Name(const char* name)
	{
		if (name)
		{
			m_name = new char[strlen(name) + 1];
			ut.strcpy(m_name, name);
		}
	}




	Name::Name(const Name& RO)
	{
		operator=(RO);
	}

	const char* Name::GetName() const
	{
		return m_name;
	}

	Name& Name::operator=(const Name& RO)
	{
		if (this != &RO)
		{
			delete[] m_name;
			m_name = nullptr;
			if (RO.m_name)
			{
				m_name = new char[strlen(RO.m_name) + 1];
				ut.strcpy(m_name, RO.m_name);
			}
		}

		return *this;
	}
	bool Name::operator>(const Name& RO) const
	{
		return ut.strcmp(m_name, RO.m_name) > 0;
	}

	Name::~Name()
	{
		delete[] m_name;
	}

	std::ostream& Name::Display(std::ostream& coutref) const
	{
		return coutref << m_name;
	}

	std::istream& Name::read(std::istream& cinref)
	{
		delete[] m_name;
		m_name = nullptr;

		char local[128]{};
		cinref.getline(local, 128);
		if (cinref)
		{
			m_name = new char[strlen(local) + 1];
			ut.strcpy(m_name, local);
		}

		return cinref;
	}

	std::ostream& operator<<(std::ostream& left, const Name& name)
	{
		return name.Display(left);
	}

	std::istream& operator<<(std::istream& left, Name& name)
	{
		return name.read(left);
	}

}
