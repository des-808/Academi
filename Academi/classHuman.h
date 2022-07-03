#pragma once

#define  HUMAN_PARAMETRES const std::string& last_name, const std::string& first_name, unsigned int age
#define  HUMAN_ARGUMENTS   last_name, first_name, age
class Human {
	std::string last_name;
	std::string first_name;
	unsigned int age;
public:
	const std::string& get_last_name()const;
	const std::string& get_first_name()const;
	unsigned int get_age()const;

	void set_last_name(const std::string& last_name);
	void set_first_name(const std::string& first_name);
	void set_age(unsigned int age);

	Human(HUMAN_PARAMETRES);

	virtual ~Human() {
		cout << "HumanDestructor:\t" << this << endl;
	}
	virtual void info()const {
		cout << last_name << " " << first_name << " " << age << " Year's  " << endl;
	}

};