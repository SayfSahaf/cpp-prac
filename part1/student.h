#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <iostream>
class Student
{
	private:
		std::string 	name_first;
		std::string 	name_last ;
		int 			student_id;
		float 			student_average;

	public:
		Student(){}
		Student(std::string first_name, std::string last_name, int id, float average);
		int getAverage() const;
		int getID() const;
		std::string getFirst() const;
		std::string getLast() const;
		void printInfo() const;
};

#endif
