#include "addlib.h"
#include "classTeacher.h"


	const std::string& Teacher::get_speciality()const { return speciality; }
	unsigned int Teacher::get_experience()const { return experience; }

	void Teacher::set_speciality(const std::string& speciality) { this->speciality = speciality; }
	void Teacher::set_experience(unsigned int experience) { this->experience = experience; }

	Teacher::Teacher(HUMAN_PARAMETRES, TEACHER_PARAMETRES) :Human(HUMAN_ARGUMENTS) {
		set_speciality(speciality);
		set_experience(experience);
		cout << "TeachertudentConstructor:\t" << this << endl;
	}

	Teacher::~Teacher() { cout << "TeacherDestructor:\t" << this << endl; }

	void  Teacher::info()const {
		Human::info();
		cout << speciality << " " << experience << endl;
	}
