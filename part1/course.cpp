#include "course.h"

Course::Course(const std::string& name)
	: m_name(name)
{}

void Course::addStudent(const Student& s)
{
	m_students.push_back(s);
}

const std::vector<Student> Course::getStudent()
{
	return m_students;
}
