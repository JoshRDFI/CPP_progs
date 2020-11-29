#pragma once
#include <iostream>
#include <iomanip>
#include <array>
#include "degree.h"
using namespace std;

class Student
{
public:
	const static int numDays = 3;
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numClassDays[numDays];
	DegreeProgram degreeProgram;

	Student();
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numClassDays[], DegreeProgram degreeProgram);
	~Student();

	//accessors
	string getID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int* getNumDays();
	DegreeProgram getDegreeProgram();
	
	//mutators
	void setID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setNumDays(int numClassDays[]);
	void setDegreeProgram(DegreeProgram dp);

	//misc
	static void printHeader();

	void print();
};