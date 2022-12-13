#include <iostream>
#ifndef SDDS_CD_H_
#define SDDS_CD_H_
namespace sdds {
	class Cd
	{
	private:
		char*  performers {};
		char* label{};
		int selections{};
		double playtime{};

	public:
		Cd();
		Cd(const char* performers, const char* label, int selections, double playtime);
		virtual void Report();
		virtual ~Cd();
		std::ostream& Display(std::ostream& coutref = std::cout)const;
	};
	std::ostream& operator<<(std::ostream& left, const Cd& name);
}
#endif // !SDDS_CD_H_