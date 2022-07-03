#include "addlib.h"
#include "classStudent.h"



	const std::string& Student::get_speciality()const { return speciality; }
	const std::string& Student::get_group()const { return group; }
	unsigned int Student::get_year()const { return year; }
	float Student::get_rating()const { return rating; }
	float Student::get_attendance()const { return attendance; }


	void Student::set_speciality(const std::string& speciality) { this->speciality = speciality; }
	void Student::set_group(const std::string& group) { this->group = group; }
	void Student::set_year(unsigned int year) { this->year = year; }
	void Student::set_rating(float rating) { this->rating = rating; }
	void Student::set_attendance(float attendance) { this->attendance = attendance; }

	Student::Student(HUMAN_PARAMETRES, STUDENT_PARAMETRES) :Human(HUMAN_ARGUMENTS) {
		set_speciality(speciality);
		set_group(group);
		set_year(year);
		set_rating(rating);
		set_attendance(attendance);
		cout << "StudentConstructor:\t" << this << endl;
	}

	Student::~Student() { cout << "StudentDestructor:\t" << this << endl; }

	void  Student::info()const {
		Human::info();
		cout << speciality << " " << group << " " << year << " " << rating << " " << attendance << endl;
	}

