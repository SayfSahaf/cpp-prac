#include "../include/student.h"

Student::Student(std::string first_name, std::string last_name, int id, float average)
	: name_first(first_name)
	, name_last(last_name)
	, student_id(id)
	, student_average(average)
{}

int Student::getAverage() const
{
	return student_average;
}

int Student::getID() const
{
	return student_id;
}

std::string Student::getFirst() const
{
	return name_first;
}

std::string Student::getLast() const
{
	return name_last;
}

void Student::printInfo() const
{
	std::cout << name_first <<
	" | " << name_last <<
	" | " << student_id <<
	" | " << student_average << std::endl;
}
