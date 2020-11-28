#pragma once
#include <iostream>
#include <string>
#include <array>
#include "student.h"
#include "degree.h"
using namespace std;


class classRoster
{
private:
	int lastIndex = -1;
	const static int numStu = 5;
	Student* classRosterArray[numStu];

public:
	void parse(string studentData);
	void add(string STUDENTID, 
		string FIRSTNAME, 
		string LASTNAME, 
		string EMAILADDRESS, 
		int AGE, 
		int daysInCourse1, 
		int daysInCourse2,
		int daysInCourse3,
		DegreeProgram DEGREEPROGRAM);
	void printAll();
	void printByDegreeProgram(DegreeProgram DEGREEPROGRAM);
	void printInvalidEmails();
	void printAverageDaysInCourse(string STUDENTID);
	void removeStuByID(string STUDENTID);
	~classRoster();
};

