#include "addlib.h"
#ifndef 1
#include "classStudent.cpp"

#endif // !1



class Graduate :public Student {
	std::string subject;
public:
	/*Human* Human;
	Student* Student;*/
	const std::string& get_subject()const { return subject; }
	void set_subject(const std::string& subject) { this->subject = subject; }

	Graduate(HUMAN_PARAMETRES, STUDENT_PARAMETRES, const std::string& subject)
		:Student(HUMAN_ARGUMENTS, STUDENT_ARGUMENTS) {
		set_subject(subject);
		cout << "GraduateConstructor:\t" << this << endl;
	}

	~Graduate() { cout << "GraduateDestructor:\t" << this << endl; }

	void  info()const {
		Student::info();
		cout << subject << " " << endl;
	}

};