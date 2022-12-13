#include "Cd.h"
#ifndef SDDS_Classic_H_
#define SDDS_Classic_H_
namespace sdds {
	class Classic :public Cd {
		const char* primaryWork;
	public:
		Classic();
		Classic(const char* primaryWork, const char* performers, const char* label, int selections,double playtime);
		virtual void Report() const;
		virtual ~Classic();
	};

}
#endif // !SDDS_Classic_H_
