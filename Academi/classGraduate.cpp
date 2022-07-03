#include "addlib.h"

#include "classGraduate.h"



	const std::string& Graduate::get_subject()const { return subject; }
	void Graduate::set_subject(const std::string& subject) { this->subject = subject; }

	Graduate::Graduate(HUMAN_PARAMETRES, STUDENT_PARAMETRES, const std::string& subject)
		:Student(HUMAN_ARGUMENTS, STUDENT_ARGUMENTS) {
		set_subject(subject);
		cout << "GraduateConstructor:\t" << this << endl;
	}

	Graduate::~Graduate() { cout << "GraduateDestructor:\t" << this << endl; }

	void  Graduate::info()const {
		Student::info();
		cout << subject << " " << endl;
	}

