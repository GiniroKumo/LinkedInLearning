#include "records.h"

#include <iostream>

int Student::get_student_ID() {
	return(student_ID);
}

std::string Student::get_student_name() {
	return(student_name);
}

void Student::set_student_ID(const int& new_student_ID) {
	student_ID = new_student_ID;
}

void Student::set_student_name(const std::string& new_student_name) {
	student_name = new_student_name;
}

int Course_Class::get_course_ID() {
	return(course_ID);
}

std::string Course_Class::get_class_name() {
	return(class_name);
}

void Course_Class::set_course_ID(const int& new_course_ID) {
	course_ID = new_course_ID;
}

void Course_Class::set_course_name(const std::string& new_course_name) {
	class_name = new_course_name;
}

int Grade::get_student_ID() {
	return(student_ID);
}

int Grade::get_course_ID() {
	return(course_ID);
}

char Grade::get_grade() {
	return(grade);
}

void Grade::set_student_ID(const int& new_student_ID) {
	student_ID = new_student_ID;
}

void Grade::set_course_ID(const int& new_course_ID) {
	course_ID = new_course_ID;
}

void Grade::set_grade(const char& new_grade) {
	grade = new_grade;
}