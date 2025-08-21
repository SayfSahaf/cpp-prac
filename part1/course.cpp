#include "course.h"
#include "student.h"
#include <fstream>

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

void Course::printInfo() const
{
	for (Student s : m_students)
	{
		std::cout << s.getFirst() <<
		" " << s.getLast() <<
		" " << s.getID() <<
		" " << s.getAverage() <<std::endl;
	}
}

void Course::addStudentFromFile(const std::string& filename)
{
	std::ifstream fin(filename);
	std::string first, last;
	int id;
	float avg;

	while (fin >> first)
	{
		fin >> last >> id >> avg;
		addStudent(Student(first, last, id, avg));
	}
}
