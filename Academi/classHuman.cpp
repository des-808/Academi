#include "addlib.h"
//#include "classHuman.h"

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

};