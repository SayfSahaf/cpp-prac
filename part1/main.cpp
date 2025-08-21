#include "student.h"
#include "course.h"
#include <iostream>
#include <fstream>


int main()
{
	//int year = 1890;
    //std::cout << year << ": " << "the year of doom." <<std::endl;
    //std::string name = "Sayf";
    //std::cout << name << std::endl;
    //std::vector<int> vec_int;
    //vec_int.push_back(33);
    //vec_int.push_back(78);
    //vec_int.push_back(65);

    // typical for-loop
    /*
    for (size_t i = 0; i < vec.size(); i++)
    {
    	std::cout << vec[i] << std::endl;
    };
    */

    // python-like ranged-based for-loop
    /*
    for (int a : vec_int)
    {
    	std::cout << a << std::endl;
    };
    */

    //using floats
    /*
    std::vector<float> vec_float;
    vec_float.push_back(45.4f);
    vec_float.push_back(32.32f);

    for (float a : vec_float)
    {
    	std::cout << a << std::endl;
    };
    */

    Course c1("BIOL1001");
    c1.addStudentFromFile("students.txt");
    c1.printInfo();


    return 0;
};
