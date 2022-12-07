#include "FullName.h"
namespace sdds
{
	FullName::FullName(const char* name, const char* lastName) :Name(name)
	{
		if (lastName)
		{
			m_lastName = new char[strlen(lastName) + 1];
			strcpy(m_lastName, lastName);
		}
	}
	FullName::FullName(const FullName& fn) :Name(fn)
	{
		operator=(fn);
	}
	FullName& FullName::operator=(const FullName& fn)
	{
		if (this != &fn)
		{
			Name::operator=(fn);
			delete[] m_lastName;
			m_lastName = nullptr;
			if (fn.m_lastName)
			{
				m_lastName = new char[strlen(fn.m_lastName) + 1];
				strcpy(m_lastName, fn.m_lastName);
			}
		}

		return *this;
	}
	FullName::~FullName()
	{
		delete[] m_lastName;
	}
	std::ostream& FullName::Display(std::ostream& coutref) const
	{
		Name::Display(coutref);
		if (m_lastName)
		{
			coutref << " " << m_lastName;
		}
		return coutref;
	}
	std::istream& FullName::read(std::istream& cinref)
	{
		Name::read(cinref);
		delete[] m_lastName;
		m_lastName = nullptr;

		char local[128]{};
		cinref.getline(local, 128);
		if (cinref)
		{
			m_lastName = new char[strlen(local) + 1];
			strcpy(m_lastName, local);
		}

		return cinref;
	}
}
