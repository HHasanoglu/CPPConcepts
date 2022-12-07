#ifndef SDDS_ANIMAL_H_
#define SDDS_ANIMAL_H_
namespace sdds {
	class Animal
	{
	//private:
		//char m_name[41]{};
	public:
		//Animal(const char* name="Nameless");
		//Animal(const Animal& RO);
		//Animal& operator=(const Animal& RO);

		//const char* Getname()const;
		//void Setname(const char* name);
		virtual void act()=0;
		virtual void move()=0;
		virtual void sound()=0;
		virtual ~Animal(){};
	};
	extern bool debug;
}
#endif // !SDDS_ANIMAL_H_


