#ifndef SDDS_FullName_H_
#define SDDS_FullName_H_
#include<iostream>
#include "Name.h"
namespace sdds {
    class FullName :public Name {
        char* m_lastName{};
    public:
        FullName(const char* name = nullptr, const char* lastName = nullptr);
        FullName(const FullName& RO);
        FullName& operator=(const FullName& RO);
        virtual ~FullName();
        std::ostream& Display(std::ostream& coutref = std::cout)const;
        std::istream& read(std::istream& cinref = std::cin);
    };
}
#endif // !SDDS_FullName_H_

