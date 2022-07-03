#pragma once


#include "classHuman.h"
#include "classStudent.h"


class Student;
class Graduate :public Student {
	std::string subject;
public:
	
	const std::string& get_subject()const;
	void set_subject(const std::string& subject);

	Graduate(HUMAN_PARAMETRES, STUDENT_PARAMETRES, const std::string& subject);
	/*Graduate(HUMAN_PARAMETRES, STUDENT_PARAMETRES, const std::string& subject)
		:Student(HUMAN_ARGUMENTS, STUDENT_ARGUMENTS);*/

	~Graduate();

	void  info()const;

};