#pragma once

#include "classHuman.h"
#include "classStudent.h"



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
	const std::string& get_speciality()const;
	const std::string& get_group()const;
	unsigned int get_year()const;
	float get_rating()const;
	float get_attendance()const;


	void set_speciality(const std::string& speciality);
	void set_group(const std::string& group);
	void set_year(unsigned int year);
	void set_rating(float rating);
	void set_attendance(float attendance);

	Student(HUMAN_PARAMETRES, STUDENT_PARAMETRES);
	//Student(HUMAN_PARAMETRES, STUDENT_PARAMETRES) :Human(HUMAN_ARGUMENTS);

	~Student();

	void  info()const;

};