﻿#include<iostream>
using namespace std;

#define  HUMAN_PARAMETRES const std::string& last_name, const std::string& first_name, unsigned int age
#define  HUMAN_ARGUMENTS   last_name, first_name, age

class Human {
	std::string last_name;
	std::string first_name;
	unsigned int age;
public:
	const std::string& get_last_name()const {return last_name;}
	const std::string& get_first_name()const {return first_name;}
	unsigned int get_age()const {return age;}

	void set_last_name(const std::string& last_name) {this->last_name = last_name;}
	void set_first_name(const std::string& first_name) {this->first_name = first_name;}
	void set_age(unsigned int age) {this->age = age;}

	Human(HUMAN_PARAMETRES) {
		set_last_name(last_name);
		set_first_name(first_name);
		set_age(age);
		cout << "HumanConstructor:\t" << this << endl;
	}

	virtual ~Human() {
		cout << "HumanDestructor:\t" << this << endl;
	}
	virtual void info()const {
		
		cout << last_name << " " << first_name <<" "<< age <<" Year's  "<< endl;
	}

};

std::ostream& operator<<(std::ostream& os, const Human& obj) {

	return os << obj.get_last_name() << " " << obj.get_first_name() << " " << obj.get_age() << " ";
}

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

	Student(HUMAN_PARAMETRES, STUDENT_PARAMETRES):Human(HUMAN_ARGUMENTS) {
		set_speciality(speciality);
		set_group(group);
		set_year(year);
		set_rating(rating);
		set_attendance(attendance);
		cout << "StudentConstructor:\t" << this << endl;
	}

	~Student() {cout << "StudentDestructor:\t" << this << endl;}

	void  info()const {
		Human::info();
		cout<< speciality << " " << group << " " << year << " " << rating << " " << attendance  << endl;
	}

};

#define  TEACHER_PARAMETRES const std::string& speciality,  unsigned int experience
#define  TEACHER_ARGUMENTS  speciality,experience

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

class Graduate :public Student {
	std::string subject;
public:
	const std::string& get_subject()const { return subject; }
	void set_subject(const std::string& subject) { this->subject = subject; }

	Graduate(HUMAN_PARAMETRES, STUDENT_PARAMETRES, const std::string& subject)
		:Student(HUMAN_ARGUMENTS,STUDENT_ARGUMENTS) {
		set_subject(subject);
		cout << "GraduateConstructor:\t" << this << endl;
	}

	~Graduate() { cout << "GraduateDestructor:\t" << this << endl; }

	void  info()const {
		Student::info();
		cout << subject << " " << endl;
	}

};

//#define INHERITANCE_CHECK


int main() {
	setlocale(LC_ALL, "Russian");
#ifdef INHERITANCE_CHECK
	/*Human h("Montana", "Antonio", 25);
	h.info();*/

	Student x("Montanasd", "Antonioawer", 25,"ds", "ps", 12, 13, 14);
	x.info();

	Teacher prepod("Vasya", "Pupkin", 25, "xz", 12);
	prepod.info();


	Graduate hank("Shrader", "Hank", 40, "criminalist", "ps_220", 12, 13, 14,"abrakadabra");
	hank.info();
#endif INHERITANCE_CHECK

	Human* group[] = {
		new Student("Montanasd", "Antonioawer", 25,"ds", "ps", 12, 13, 14),
		new Teacher("Vasya", "Pupkin", 25, "xz", 12),
		new Graduate("Shrader", "Hank", 40, "criminalist", "ps_220", 12, 13, 14,"abrakadabra"),
		new Student("fedya", "fortochkin", 25,"xzs", "pps", 12,140, 99)
	};
	for (int i = 0; i < sizeof(group)/sizeof(group[0]); i++) {

		group[i]->info();
	}
	for (int i = 0; i < sizeof(group)/sizeof(group[0]); i++) {

		delete group[i];
	}
	


}