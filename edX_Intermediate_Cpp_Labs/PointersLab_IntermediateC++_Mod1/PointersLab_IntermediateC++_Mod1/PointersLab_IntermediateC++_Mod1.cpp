// PointersLab_IntermediateC++_Mod1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h";

void PassByValue(int _num1);
void PassByRef(int *_num1);
void ModifyPerson(Person &_person);


int main()
{
	int num1{3};
	int num2{};
	int *pNum = &num2;
	*pNum = 5;
	PassByValue(num1);
	std::cout << "The value of num1 in main is: " + std::to_string(num1) << std::endl;
	PassByRef(pNum);
	std::cout << "The value of pNum in main is: " + std::to_string(*pNum) << std::endl;
	PassByValue(*pNum);
	double *dNum = new double();
	*dNum = 10.0;
	std::cout << *dNum << std::endl;
	delete dNum;


	std::string theName{ "Seth" };
	Person seth = Person(theName, 25, 72, 195.5);
	seth.Display();
	ModifyPerson(seth);
	seth.Display();
	return 0;
}

void PassByValue(int _num1)
{
	std::cout << "You are in the PassByValue function." << std::endl;
	_num1 = 2;
	std::cout << _num1 << std::endl;
}

void PassByRef(int *_num1)
{
	std::cout << "You are in the PassByRef function." << std::endl;
	*_num1 = 50;
	std::cout << *_num1 << std::endl;
}

void ModifyPerson(Person &_person)
{	
	_person.SetName("Adam");
}

