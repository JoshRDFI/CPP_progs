#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <array>
#include "degree.h"
using namespace std;

class Student
{
public:
	const static int numDays = 3;
	
private:
	string STUDENTID;
	string FIRSTNAME;
	string LASTNAME;
	string EMAILADDRESS;
	int AGE;
	int NUMDAYS[numDays];
	DegreeProgram DEGREEPROGRAM;

public:
	Student();
	Student(string STUDENTID, string FIRSTNAME, string LASTNAME, string EMAILADDRESS, int AGE, int NUMDAYS[], DegreeProgram DEGREEPROGRAM);
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
	void setID(string STUDENTID);
	void setFirstName(string FIRSTNAME);
	void setLastName(string LASTNAME);
	void setEmailAddress(string EMAILADDRESS);
	void setAge(int AGE);
	void setNumDays(int NUMDAYS[]);
	void setDegreeProgram(DegreeProgram DEGREEPROGRAM);

	//misc
	static void printHeader();

	void print();

};