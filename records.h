#pragma once

#include <string>

class Student {
	int student_ID;
	std::string student_name;
public:
	int get_student_ID();
	std::string get_student_name();

	void set_student_ID(const int& new_student_ID);
	void set_student_name(const std::string& new_student_name);
};

class Course_Class {
	int course_ID;
	std::string class_name;
	unsigned int credits;
public:
	int get_course_ID();
	std::string get_class_name();

	void set_course_ID(const int& new_course_ID);
	void set_course_name(const std::string& new_course_name);
};

class Grade {
	int student_ID;
	int course_ID;
	char grade;
public:
	int get_student_ID();
	int get_course_ID();
	char get_grade();

	void set_student_ID(const int& new_student_ID);
	void set_course_ID(const int& new_course_ID);
	void set_grade(const char& new_grade);
};

