#include "addlib.h"
//#include "classStudent.h"
class Human;
#define  STUDENT_PARAMETRES const std::string& speciality, const std::string& group, unsigned int year, float rating, float attendance
#define  STUDENT_ARGUMENTS  speciality, group, year, rating, attendance

class Student :public Human {
	std::string speciality;
	std::string group;
	unsigned int year;
	float rating;
	float attendance;
public:
	const std::string& get_speciality()const { return speciality; }
	const std::string& get_group()const { return group; }
	unsigned int get_year()const { return year; }
	float get_rating()const { return rating; }
	float get_attendance()const { return attendance; }


	void set_speciality(const std::string& speciality) { this->speciality = speciality; }
	void set_group(const std::string& group) { this->group = group; }
	void set_year(unsigned int year) { this->year = year; }
	void set_rating(float rating) { this->rating = rating; }
	void set_attendance(float attendance) { this->attendance = attendance; }

	Student(HUMAN_PARAMETRES, STUDENT_PARAMETRES) :Human(HUMAN_ARGUMENTS) {
		set_speciality(speciality);
		set_group(group);
		set_year(year);
		set_rating(rating);
		set_attendance(attendance);
		cout << "StudentConstructor:\t" << this << endl;
	}

	~Student() { cout << "StudentDestructor:\t" << this << endl; }

	void  info()const {
		Human::info();
		cout << speciality << " " << group << " " << year << " " << rating << " " << attendance << endl;
	}

};