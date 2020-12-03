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
	this->degreeProgram = DegreeProgram::SOFTWARE;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numClassDays[], DegreeProgram degreeProgram)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	for (int i = 0; i < numDays; i++) this->numClassDays[i]=numClassDays[i];
	this->degreeProgram = degreeProgram;
}

//generic destructor
Student::~Student() {} 

//accessors
string Student::getID() {return this-> studentID;}

string Student::getFirstName() {return this->firstName;}

string Student::getLastName() {return this->lastName;}

string Student::getEmailAddress() {return this->emailAddress;}

int Student::getAge() {return this->age;}

int* Student::getNumDays() {return this->numClassDays;}

DegreeProgram Student::getDegreeProgram() {return this->degreeProgram;}

//mutators
void Student::setID(string studentID) { this->studentID; }

void Student::setFirstName(string firstName) { this->firstName; }

void Student::setLastName(string lastName) { this->lastName; }

void Student::setEmailAddress(string emailAddress) { this->emailAddress; }

void Student::setAge(int age) {this->age; }

void Student::setNumDays(int numClassDays[])
{
	for (int i = 0; i < numDays; i++) this->numClassDays[i] = numClassDays[i];
}

void Student::setDegreeProgram(DegreeProgram dp) { this->degreeProgram = dp; }

//misc
void Student::printHeader()
{
	cout << "Format: Student ID | First Name | Last Name | Age | Days to Complete | Degree Program " << endl;
}

void Student::print()
{
	cout << this->getID() << " \t ";
	cout << this->getFirstName() << " \t ";
	cout << this->getLastName() << " \t ";
	cout << this->getAge() << " \t ";
	cout << "{" << this->getNumDays()[0] << ", ";
	cout << this->getNumDays()[1] << ", ";
	cout << this->getNumDays()[2] << "} \t ";
	cout << DegreeProgramStrings[this->getDegreeProgram()] << endl;
}
