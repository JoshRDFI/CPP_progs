#include "student.h"
#include "degree.h"
using namespace std;

array<int, 3> NUMDAYS;

Student::Student()
{
	this->STUDENTID = "";
	this->FIRSTNAME = "";
	this->LASTNAME = "";
	this->EMAILADDRESS = "";
	this->AGE = 0;
	for (int i = 0; i < numDays; i++) this->NUMDAYS[i] = 0;
	this->DEGREEPROGRAM = DegreeProgram::SOFTWARE;
}

Student::Student(string STUDENTID, string FIRSTNAME, string LASTNAME, string EMAILADDRESS, int AGE, int NUMDAYS[], DegreeProgram DEGREEPROGRAM)
{
	this->STUDENTID = "STUDENTID";
	this->FIRSTNAME = "FIRSTNAME";
	this->LASTNAME = "LASTNAME";
	this->EMAILADDRESS = "EMAILADDRESS";
	this->AGE = AGE;
	for (int i = 0; i < numDays; i++) this->NUMDAYS[i]=NUMDAYS[i];
	this->DEGREEPROGRAM = DEGREEPROGRAM;
}

Student::~Student() {} //generic destructor since it's not necessary

string Student::getID() 
	{ 
	return this->STUDENTID; 
	}

string Student::getFirstName() 
	{ 
	return this->FIRSTNAME; 
	}

string Student::getLastName() 
	{
	return this->LASTNAME; 
	}

string Student::getEmailAddress()
	{ 
	return this->EMAILADDRESS; 
	}

int Student::getAge() 
	{ 
	return this->AGE; 
	}

int* Student::getNumDays() 
	{ 
	return this->NUMDAYS; 
	}

DegreeProgram Student::getDegreeProgram() 
	{ 
	return this->DEGREEPROGRAM;	
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
