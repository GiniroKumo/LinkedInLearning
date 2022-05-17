#include <iostream>
#include "records.h"

int main() {

	Student *new_student;

	new_student = new Student;
	new_student->set_student_name("Marc Sommerfield");
	new_student->set_student_ID(333);
	std::cout << "Student Name is " << new_student->get_student_name() << std::endl;
	std::cout << "Student ID is " << new_student->get_student_ID() << std::endl;

	delete new_student;

	Course_Class *new_course;
	new_course = new Course_Class;
	new_course->set_course_name("Coding 101");
	new_course->set_course_ID(101);
	std::cout << "Course Name is " << new_course->get_class_name() << std::endl;
	std::cout << "Course ID is " << new_course->get_course_ID() << std::endl;

	delete new_course;

	Grade *new_grade;
	new_grade = new Grade;
	new_grade->set_course_ID(101);
	new_grade->set_student_ID(333);
	new_grade->set_grade('B');
	std::cout << "Student ID is " << new_grade->get_student_ID() << std::endl;
	std::cout << "Course ID is " << new_grade->get_course_ID() << std::endl;
	std::cout << "Course Grade is " << new_grade->get_grade() << std::endl;

	delete new_grade;


	return(EXIT_SUCCESS);
}