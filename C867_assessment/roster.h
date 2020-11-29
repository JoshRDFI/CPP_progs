#pragma once
//#include <iostream>
//#include <string>
//#include <array>
#include "student.h"
using namespace std;


class classRoster
{
public:
	int lastIndex = -1;
	const static int numStu = 5;
	Student* classRosterArray[numStu];
	void parse(string studentData);
	void add(string studentID, 
		string firstName, 
		string lastName, 
		string emailAddress, 
		int age, 
		int daysInCourse1, 
		int daysInCourse2,
		int daysInCourse3,
		DegreeProgram dp);
	void printAll();
	void printByDegreeProgram(DegreeProgram dp);
	void printInvalidEmails();
	void printAverageDaysInCourse(string studentID);
	void removeStuByID(string studentID);
	~classRoster();
};

