﻿#include<iostream>
#include<string>
#include<fstream>

using namespace std;

enum Defaults {
	type_width = 16,
	last_name_width = 20,
	first_name_width = 15,
	age_width = 5,
	speciality_width = 25,
	group_width = 8,
	year_width = 3,
	rating_width = 8,
	attendance_width = 8,
	experience_width = 8
};

#define  HUMAN_PARAMETRES const std::string& last_name, const std::string& first_name, unsigned int age
#define  HUMAN_ARGUMENTS   last_name, first_name, age

class Human {
	std::string last_name;
	std::string first_name;
	unsigned int age;
public:
	const std::string& get_last_name()const { return last_name; }
	const std::string& get_first_name()const { return first_name; }
	unsigned int get_age()const { return age; }

	void set_last_name(const std::string& last_name) { this->last_name = last_name; }
	void set_first_name(const std::string& first_name) { this->first_name = first_name; }
	void set_age(unsigned int age) { this->age = age; }

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

		cout << last_name << " " << first_name << " " << age << " Year's  " << endl;
	}
	/*virtual std::ostream& print(std::ostream& os = cout)const {
		return os << last_name << " " << first_name << " " << age;
	}*/

	virtual std::ostream& print(std::ostream& os)const {
		os.width(Defaults::last_name_width);
		os << std::left;
		os << last_name;
		os.width(Defaults::first_name_width);
		os << first_name;
		os.width(Defaults::age_width);
		os << age;
		return(os);
	}


	virtual std::ofstream& print(std::ofstream& ofs)const {
		ofs << std::left;
		ofs.width(Defaults::type_width);
		ofs << std::string(typeid(*this).name()) + ": ";
		ofs.width(Defaults::last_name_width);
		ofs << last_name;
		ofs.width(Defaults::first_name_width);
		ofs << first_name;
		ofs.width(Defaults::first_name_width);
		ofs << age;
		return(ofs);
	}


	virtual std::ifstream& scan(std::ifstream& ifs) {
		ifs >> last_name >> first_name >> age;
		return(ifs);
	}

};

std::ostream& operator<<(std::ostream& os, const Human& obj) {

	//return os << obj.get_last_name() << " " << obj.get_first_name() << " " << obj.get_age() << " ";
	return obj.print(os);
}

std::ostream& operator<<(std::ofstream& ofs, const Human& obj) {
	obj.print(ofs);
	return ofs;
}
std::ifstream& operator>>(std::ifstream& ifs, Human& obj) {
	obj.scan(ifs);
	return ifs;
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

	std::ostream& print(std::ostream& os)const {
		//return Human::print(os) << " " << speciality << " " << group << " " << year << " " << rating << " " << attendance;
		Human::print(os);
		os.width(Defaults::speciality_width);
		os << speciality;
		os.width(Defaults::group_width);
		os << group;
		os.width(Defaults::year_width);
		os << year;
		os.width(Defaults::rating_width);
		os << rating;
		os.width(Defaults::attendance_width);
		os << attendance;
		return(os);
	}

	std::ofstream& print(std::ofstream& ofs)const {
		Human::print(ofs);
		ofs.width(Defaults::speciality_width);
		ofs << speciality;
		ofs.width(Defaults::group_width);
		ofs << group;
		ofs.width(Defaults::year_width);
		ofs << year;
		ofs.width(Defaults::rating_width);
		ofs << rating;
		ofs.width(Defaults::attendance_width);
		ofs << attendance;
		return(ofs);
	}
	std::ifstream& scan(std::ifstream& ifs) {
		Human::scan(ifs);
		char speciality[Defaults::speciality_width] = {};
		ifs.read(speciality, Defaults::speciality_width);
		for (int i = Defaults::speciality_width - 1; speciality[i] == ' '; i--) {
			speciality[i] = 0;
		}
			this->speciality = speciality;
		ifs >> group;
		ifs >> year;
		ifs >> rating;
		ifs >> attendance;
		return(ifs);
		//ifs >> last_name >> first_name >> age;
		//return(ifs);
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

	std::ostream& print(std::ostream& os)const {
		////return Human::print(os) << " " << speciality << " " << experience;
		Human::print(os);
		os.width(Defaults::speciality_width);
		os << speciality;
		os.width(Defaults::experience_width);
		os << experience;
		return(os);
	}
	std::ofstream& print(std::ofstream& ofs)const {
		Human::print(ofs);
		ofs.width(25);
		ofs << speciality;
		ofs.width(5);
		ofs << experience;
		return(ofs);
	}
	std::ifstream& scan(std::ifstream& ifs) {
		Human::scan(ifs);
		char speciality[Defaults::speciality_width] = {};
		ifs.read(speciality, Defaults::speciality_width);
		for (int i = Defaults::speciality_width - 1; speciality[i] == ' '; i--) {
			speciality[i] = 0;
		}
		this->speciality = speciality;
		ifs >> experience;
		return(ifs);
		//ifs >> last_name >> first_name >> age;
		//return(ifs);
	}


};

Human* HummanFactory(const std::string type);
Human** load(const char filename[], int& n);

class Graduate :public Student {
	std::string subject;
public:
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

	std::ostream& print(std::ostream& os)const {
		return Student::print(os) << " " << subject;
	}

	std::ofstream& print(std::ofstream& ofs)const {
		Student::print(ofs) << " " << subject;
		return (ofs);
	}

	std::ifstream& scan(std::ifstream& ifs) {
		Student::scan(ifs);
		std::getline(ifs, subject);
		return(ifs);
		//ifs >> last_name >> first_name >> age;
		//return(ifs);
	}

};

Human** load(const char filename[], int& n) {
	Human** group = nullptr;
	std::ifstream wfile(filename);
	if (wfile.is_open()) {
		std::string buffer;
		n = 0;
		for (; !wfile.eof(); n++) { std:getline(wfile, buffer); }
		n--;
		group = new Human * [n] {};
		std::cout << wfile.tellg() << endl;
		wfile.clear();
		wfile.seekg(0);
		std::cout << wfile.tellg() << endl;
		for (int i = 0; i < n; i++) {
			std::getline(wfile, buffer, ':');
			group[i]= HummanFactory(buffer);
			if (group[i])wfile >> *group[i];

		}

		wfile.close();
	}
	else { std::cerr << "Erroor: file not found " << endl; }
	return group;

}

Human* HummanFactory(const std::string type) {
	if (type.find("class Student") != std::string::npos)
		return new Student("", "", 0, "", "", 0, 0, 0);
	if (type.find("class Teacher") != std::string::npos)
		return new Teacher("", "", 0, "", 0);
	if (type.find("class Graduate") != std::string::npos)
		return new Graduate("", "", 0, "", "", 0, 0, 0, "");
	return nullptr;

}

//#define INHERITANCE_CHECK
//#define POLIMORPHISM_CHECK

int main() {
	setlocale(LC_ALL, "Russian");
#ifdef INHERITANCE_CHECK
	/*Human h("Montana", "Antonio", 25);
	h.info();*/

	Student x("Montanasd", "Antonioawer", 25, "ds", "ps", 12, 13, 14);
	x.info();

	Teacher prepod("Vasya", "Pupkin", 25, "xz", 12);
	prepod.info();


	Graduate hank("Shrader", "Hank", 40, "criminalist", "ps_220", 12, 13, 14, "abrakadabra");
	hank.info();
#endif INHERITANCE_CHECK
#ifdef POLIMORPHISM_CHECK

	Human* group[] = {
		new Student("Montanasd", "Antonioawer", 25,"ds", "ps", 12, 13, 14),
		new Teacher("Vasya", "Pupkin", 25, "xz", 12),
		new Graduate("Shrader", "Hank", 40, "criminalist", "ps_220", 12, 13, 14,"abrakadabra"),
		new Student("fedya", "fortochkin", 25,"xzs", "pps", 12,140, 99)
	};

	std::ofstream fout("Academy.txt");

	/*for (int i = 0; i < sizeof(group)/sizeof(group[0]); i++) {

		group[i]->info();
	}
	for (int i = 0; i < sizeof(group)/sizeof(group[0]); i++) {

		delete group[i];
	}*/
	for (int i = 0; i < sizeof(group) / sizeof(group[0]); i++) {
		//cout << typeid(*group[i]).name() << endl;
		cout << *group[i] << endl;
		fout << *group[i] << endl;
		//cout<<*group[i]<<endl;
	}
	fout.close();
	//for (int i = 0; i < sizeof(group) / sizeof(group[0]); i++) {
	//		//cout << typeid(*group[i]).name() << endl;
	//		//cout << *group[i] << "  ";

	//		group[i]->print();

	//		cout << endl << "__________________________________________________________________" << endl;
	//		//cout<<*group[i]<<endl;

	//	}  
#endif // POLIMORPHISM_CHECK

	int n = 0;
	Human** grup = load("Academy.txt", n);

		for(int i = 0; i < n; i++) {
			cout << *grup[i] << endl;
		}
		for(int i = 0; i < n; i++) {
			delete grup[i];
		}
		delete[] grup;
	


}