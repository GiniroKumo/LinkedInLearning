#include "records.h"

#include <iostream>
#include <fstream>

using namespace std;

Student::Student(int the_id, string the_name) {
	id = the_id;
	name = the_name;
}
int Student::get_id() {
	return id;
}
string Student::get_name() {
	return name;
}

Course::Course(int the_id, string the_name, unsigned char the_credits) {
	id = the_id;
	name = the_name;
	credits = the_credits;
}
int Course::get_id() {
	return id;
}
string Course::get_name() {
	return name;
}
int Course::get_credits() {
	return credits;
}


Grade::Grade(int sid, int cid, char grd) {
	student_id = sid;
	course_id = cid;
	grade = grd;
}
int Grade::get_student_id() {
	return student_id;
}
int Grade::get_course_id() {
	return course_id;
}
char Grade::get_grade() {
	return grade;
}

void StudentRecords::add_student() {
	std::ifstream student_file;
	std::string temp_container = "";
	std::string student_name = "";
	int student_id{ 0 };
	student_file.open("students.txt");
	if (student_file.fail()) {
		std::cout << "nothing found!" << std::endl;
	}
	else {
		while (!student_file.eof()) {
			getline(student_file, temp_container);
			if (temp_container.size() <= 1) {
				student_id = stoi(temp_container);
			}
			else {
				student_name = temp_container;
			}
			
		}
		students.push_back(Student(student_id, student_name));
	}
	
	student_file.close();
}

void StudentRecords::add_course() {
	std::ifstream course_file;
	std::string temp_container = "";
	std::string course_name = "";
	int course_id{ 0 };
	int course_credits{ 0 };
	course_file.open("courses.txt");
	if (course_file.fail()) {
		std::cout << "nothing found!" << std::endl;
	}
	else {
		while (!course_file.eof()) {
			getline(course_file, temp_container);
			course_id = stoi(temp_container);
			temp_container.clear();
			temp_container = "";

			getline(course_file, temp_container);
			course_name = temp_container;
			temp_container.clear();
			temp_container = "";

			getline(course_file, temp_container);
			course_credits = stoi(temp_container);
			temp_container.clear();
			temp_container = "";

			courses.push_back(Course(course_id, course_name, course_credits));
		}
	}

	course_file.close();
}

void StudentRecords::add_grade() {
	std::ifstream student_grades;
	int student_id{ 0 };
	int course_id{ 0 };
	char student_grade{ ' ' };
	std::string temp_container = "";

	student_grades.open("grades.txt");
	if (student_grades.fail()) {
		std::cout << "nothing found here!" << std::endl;
	}
	else {
		getline(student_grades, temp_container);
		student_id = stoi(temp_container);
		temp_container.clear();
		temp_container = "";

		getline(student_grades, temp_container);
		course_id = stoi(temp_container);
		temp_container.clear();
		temp_container = "";

		getline(student_grades, temp_container);
		student_grade << temp_container[0]; 
		temp_container.clear();
		temp_container = "";

		grades.push_back(Grade(student_id, course_id, student_grade));
	}
	
	student_grades.close();
}

float StudentRecords::get_num_grade(char letter) {
	float num_grd;          // float for the numeric grade
	switch (letter) {
	case 'A': num_grd = 4.0f;
		break;
	case 'B': num_grd = 3.0f;
		break;
	case 'C': num_grd = 2.0f;
		break;
	case 'D': num_grd = 1.0f;
		break;
	default:  num_grd = 0.0f;
		break;
	};
	return num_grd;
}

string StudentRecords::get_student_name(int sid) {
	int i = 0;
	while (i < students.size() && students[i].get_id() != sid)
		i++;
	return students[i].get_name();
}

unsigned char StudentRecords::get_course_credits(int cid) {
	int j = 0;
	while (j < courses.size() && courses[j].get_id() != cid)
		j++;
	return courses[j].get_credits();
}

float StudentRecords::get_GPA(int sid) {
	float points = 0.0f, credits = 0.0f;
	for (Grade& grd : grades)
		if (grd.get_student_id() == sid) {
			// calculate total credits and points
			unsigned char current_credits = get_course_credits(grd.get_course_id());
			credits += current_credits;
			points += get_num_grade(grd.get_grade()) * current_credits;
		}
	return (points / credits);
}

string StudentRecords::get_course_name(int cid) {
	int j = 0;
	while (j < courses.size() && courses[j].get_id() != cid)
		j++;
	return courses[j].get_name();
}

void StudentRecords::report_card(int& id) {
	std::string student_str = get_student_name(id);
	/*std::vector<char> class_grades;
	std::vector<int> class_ids;
	std::vector<std::string> class_names;
	for (Grade& grd : grades) {
		class_grades.push_back(grd.get_grade());
		class_ids.push_back(grd.get_course_id());
	}
	for (auto it = class_ids.begin(); it != class_ids.end();) {
		class_names.push_back();
	}*/


	std::cout << "The report card for " << student_str << std::endl;
	for (Grade& grd : grades) {
		if (grd.get_student_id() == id) {
			cout << get_course_name(grd.get_course_id()) << ": " << grd.get_grade() << endl;
		}
	}
		std::cout << "The GPA is :" << get_GPA(id) << std::endl;
}