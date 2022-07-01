#include "addlib.h"
//#include "classHuman.h"
//#include "classTeacher.h"

#define  TEACHER_PARAMETRES const std::string& speciality,  unsigned int experience
#define  TEACHER_ARGUMENTS  speciality,experience
class Human;
class Teacher :public Human {
	std::string speciality;
	unsigned int experience;
public:
	const std::string& get_speciality()const { return speciality; }
	unsigned int get_experience()const { return experience; }

	void set_speciality(const std::string& speciality) { this->speciality = speciality; }
	void set_experience(unsigned int experience) { this->experience = experience; }

	Teacher(HUMAN_PARAMETRES, TEACHER_PARAMETRES) :Human(HUMAN_ARGUMENTS) {
		set_speciality(speciality);
		set_experience(experience);
		cout << "TeachertudentConstructor:\t" << this << endl;
	}

	~Teacher() { cout << "TeacherDestructor:\t" << this << endl; }

	void  info()const {
		Human::info();
		cout << speciality << " " << experience << endl;
	}
};