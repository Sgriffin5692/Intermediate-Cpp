/*
	Created by: Seth Griffin
	11/05/2018
	This program is Lab 2 for edX Intermediate C++.
*/

#include "stdafx.h"
#include "Student.h"
#include "Course.h"


int main()
{
	Student student1{ "Seth", "Griffin", "214 Pickett's Mill Run", "Acworth, GA", "123-456-7890" };
	Student student2{ "Billy", "Bob", "816 N. Main St", "Pittsburgh, PA", "987-654-3210" };
	Student student3{ "Bobby", "Lee", "578 S. Dino Ave", "Natchez, MS", "326-376-9876" };
	
	Course course1{};
	
	// Pass addresses of student objects
	course1.AddStudent(&student1);
	course1.AddStudent(&student2);
	course1.AddStudent(&student3);
	
	// Test to see if references were passed successfully
	//course1.AlterStudent();
	//std::cout << student1.GetFirstName() << std::endl;

	return 0;
}

