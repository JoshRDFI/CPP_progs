#include "roster.h"
using namespace std;

void classRoster::parse(string studentData)
{
	//Get Student ID
	int rhs = studentData.find(",");
	string STUDENTID = studentData.substr(0, rhs);
	
	//Get First Name
	int lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string FIRSTNAME = studentData.substr(lhs, rhs - lhs);

	//Get Last Name
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string LASTNAME = studentData.substr(lhs, rhs - lhs);

	//Get Email Address
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string EMAILADDRESS = studentData.substr(lhs, rhs - lhs);

	//Get Student Age
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int AGE = stoi(studentData.substr(lhs, rhs - lhs));

	//Get Number of days array data
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int daysInCourse1 = stoi(studentData.substr(lhs, rhs - lhs));
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int daysInCourse2 = stoi(studentData.substr(lhs, rhs - lhs));
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int daysInCourse3 = stoi(studentData.substr(lhs, rhs - lhs));

	//Get Degree Program
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string dp = studentData.substr(lhs, rhs - lhs);

	add(STUDENTID, FIRSTNAME, LASTNAME, EMAILADDRESS, AGE, daysInCourse1, daysInCourse2, daysInCourse3, dp);
}

void classRoster::add(string STUDENTID, string FIRSTNAME, string LASTNAME, string EMAILADDRESS, int AGE, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram DEGREEPROGRAM)
{
	int stuarray[numStu] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	classRosterArray[++lastIndex] = new Student(STUDENTID, FIRSTNAME, LASTNAME, EMAILADDRESS, AGE, stuarray, dp);
}