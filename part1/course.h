#ifndef _COURSE_H_
#define _COURSE_H_
#include <iostream>
#include "student.h"

class Course
{
	private:
		std::string m_name;
		std::vector<Student> m_students;

	public:
		Course(const std::string& name);
		void addStudent(const Student& s);
		const std::vector<Student> getStudent();
};

#endif
