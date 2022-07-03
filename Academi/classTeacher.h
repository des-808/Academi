#pragma once
#ifndef classTeacher
#define classTeacher
//---------------------------------------------------------------------------
#include "classHuman.h"
//---------------------------------------------------------------------------
#endif


#define  TEACHER_PARAMETRES const std::string& speciality,  unsigned int experience
#define  TEACHER_ARGUMENTS  speciality,experience
class Human;
class Teacher :public Human {
	std::string speciality;
	unsigned int experience;
public:
	const std::string& get_speciality()const;
	unsigned int get_experience()const;

	void set_speciality(const std::string& speciality);
	void set_experience(unsigned int experience);

	Teacher(HUMAN_PARAMETRES, TEACHER_PARAMETRES);
	//Teacher(HUMAN_PARAMETRES, TEACHER_PARAMETRES) :Human(HUMAN_ARGUMENTS);

	~Teacher();

	void  info()const;
};

