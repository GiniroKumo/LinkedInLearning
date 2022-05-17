#include <iostream>
#include <vector>
#include "records.h"

/*
a == 4
b == 3
c == 2
d == 1
f == 0

multiply the credits by the grade for the class total
*/

void intitialize();




StudentRecords SR;
int id;

int main() {
	intitialize();
	std::cout << "Enter a student ID: ";
	std::cin >> id;

	SR.report_card(id);

	

	

	//std::cout << "Enter a student ID(1 For George, 2 for Nancy): ";
	//std::cin >> id;
	//

	//// Calculate the GPA for the selected student.
	//// Write your code here
	//if (id == 1) {
	//	int total_class_value{ 0 };
	//	int total_student_points{ 0 };
	//	for (auto x : grades) {

	//		if (x.get_student_id() == 1) {

	//			int student_grade{ 0 };
	//			int course_id{ 0 };
	//			course_id = x.get_course_id();
	//			for (auto z : courses) {

	//				if (z.get_id() == course_id) {
	//					total_class_value += z.get_credits();
	//					int class_value = z.get_credits;
	//					switch (x.get_grade())
	//					{
	//					case 'A':
	//						student_grade = 4 * class_value;
	//						total_student_points += student_grade;
	//						break;
	//					case 'B' :
	//						student_grade = 3 * class_value;
	//						total_student_points += student_grade;
	//						break;
	//					case 'C':
	//						student_grade = 2 * class_value;
	//						total_student_points += student_grade;
	//						break;
	//					case 'D':
	//						student_grade = 1 * class_value;
	//						total_student_points += student_grade;
	//						break;
	//					default:
	//						student_grade = 0 * class_value;
	//						total_student_points += student_grade;
	//						break;
	//						break;
	//					}
	//				}
	//			}

	//		}
	//	}

	//	GPA = (total_student_points / total_class_value);
	//}
	//else if (id == 2) {
	//	int total_class_value{ 0 };
	//	int total_student_points{ 0 };
	//	for (auto x : grades) {

	//		if (x.get_student_id() == 2) {

	//			int student_grade{ 0 };
	//			int course_id{ 0 };
	//			course_id = x.get_course_id();
	//			for (auto z : courses) {

	//				if (z.get_id() == course_id) {
	//					total_class_value += z.get_credits();
	//					int class_value = z.get_credits();
	//					switch (x.get_grade())
	//					{
	//					case 'A':
	//						student_grade = 4 * class_value;
	//						total_student_points += student_grade;
	//						break;
	//					case 'B':
	//						student_grade = 3 * class_value;
	//						total_student_points += student_grade;
	//						break;
	//					case 'C':
	//						student_grade = 2 * class_value;
	//						total_student_points += student_grade;
	//						break;
	//					case 'D':
	//						student_grade = 1 * class_value;
	//						total_student_points += student_grade;
	//						break;
	//					default:
	//						student_grade = 0 * class_value;
	//						total_student_points += student_grade;
	//						break;
	//						break;
	//					}
	//				}
	//			}

	//		}
	//	}

	//	GPA = (total_student_points / total_class_value);

	//}

	//std::string student_str;
	//int id_offset{ 1 };
	//student_str = students[id-id_offset].get_name(); // Change this to the selected student's name

	//std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;



	/*Student *new_student;

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
	*/


	return(EXIT_SUCCESS);
}

void intitialize() {
	SR.add_student();
	

	SR.add_course();
	

	SR.add_grade();

}