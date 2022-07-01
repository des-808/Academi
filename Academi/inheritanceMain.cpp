#include "addlib.h"

#include "classHuman.cpp"
#include "classStudent.cpp"
#include "classTeacher.cpp"
#include "classGraduate.cpp"







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