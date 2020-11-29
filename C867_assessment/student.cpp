#include "student.h"
using namespace std;

array<int, 3> numClassDays;

Student::Student()
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	for (int i = 0; i < numDays; i++) this->numClassDays[i] = 0;
	this->dp = DegreeProgram::SOFTWARE;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numClassDays[], DegreeProgram dp)
{
	this->studentID = "STUDENTID";
	this->firstName = "FIRSTNAME";
	this->lastName = "LASTNAME";
	this->emailAddress = "EMAILADDRESS";
	this->age = 0;
	for (int i = 0; i < numDays; i++) this->numClassDays[i]=numClassDays[i];
	this->dp = DegreeProgram::SOFTWARE;
}

Student::~Student() {} //generic destructor since it's not necessary

string Student::getID() 
	{ 
	return this->studentID;
	}

string Student::getFirstName() 
	{ 
	return this->firstName;
	}

string Student::getLastName() 
	{
	return this->lastName;
	}

string Student::getEmailAddress()
	{ 
	return this->emailAddress;
	}

int Student::getAge() 
	{ 
	return this->age; 
	}

int* Student::getNumDays() 
	{ 
	return this->numClassDays; 
	}

DegreeProgram Student::getDegreeProgram() 
	{ 
	return this->dp;	
	}

void Student::printHeader()
{
	cout << "Student ID | First Name | Last Name | Email Address | Age | Days to Complete | Degree Program " << endl;
}

void Student::print()
{
	cout << this->getID() << " | ";
	cout << this->getFirstName() << " | ";
	cout << this->getLastName() << " | ";
	cout << this->getEmailAddress() << " | ";
	cout << this->getAge() << " | ";
	cout << this->getNumDays()[0] << ", ";
	cout << this->getNumDays()[1] << ", ";
	cout << this->getNumDays()[2] << " | ";
	cout << this->getDegreeProgram() << endl;
}

void Student::setDegreeProgram(DegreeProgram dp)
{
	cout << "Just in case nonsense!" << endl;
}