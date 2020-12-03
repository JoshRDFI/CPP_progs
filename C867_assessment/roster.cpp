#include "roster.h"
using namespace std;

void classRoster::parse(string studentData)
{
	//Get Student ID
	int rhs = studentData.find(",");
	string studentID = studentData.substr(0, rhs);
	
	//Get First Name
	int lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string firstName = studentData.substr(lhs, rhs - lhs);

	//Get Last Name
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string lastName = studentData.substr(lhs, rhs - lhs);

	//Get Email Address
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string emailAddress = studentData.substr(lhs, rhs - lhs);

	//Get Student Age
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int age = stoi(studentData.substr(lhs, rhs - lhs));

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
	DegreeProgram dp;
	if (studentData.back() == 'Y') dp = SECURITY;
	else if (studentData.back() == 'K') dp = NETWORK;
	else dp = SOFTWARE;


	add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, dp);
}

void classRoster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
	int stuarray[numStu] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	classRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, stuarray, degreeProgram);
}

void classRoster::printAll()
{
	Student::printHeader();
	//Student::print();

	for (int i = 0; i <= classRoster::lastIndex; i++)
	{
		cout << "Student ID: " << classRosterArray[i]->getID(); cout << '\t';
		cout << "First Name: " << classRosterArray[i]->getFirstName(); cout << '\t';
		cout << "Last Name: " << classRosterArray[i]->getLastName(); cout << '\t';
		cout << "Age: " << classRosterArray[i]->getAge(); cout << '\t';
		cout << "daysInCourse: {" << classRosterArray[i]->getNumDays()[0]; cout << ',';
		cout << classRosterArray[i]->getNumDays()[1]; cout << ',';
		cout << classRosterArray[i]->getNumDays()[2]; cout << "}\t";
		cout << "Degree Program: " << DegreeProgramStrings[classRosterArray[i]->getDegreeProgram()]; cout << endl;
	}
}

void classRoster::printByDegreeProgram(DegreeProgram dp)
{
	Student::printHeader();
	for (int i = 0; i <= classRoster::lastIndex; i++)
	{
		if (classRoster::classRosterArray[i]->getDegreeProgram() == dp) classRosterArray[i]->print();
	}
	cout << endl;
}

void classRoster::printInvalidEmails()
{
	bool any = false;
	for (int i = 0; i <= classRoster::lastIndex; i++)
	{
		string emailAddress = (classRosterArray[i]->getEmailAddress());
		if (emailAddress.find(' ') != string::npos)
		{
			any = true;
			cout << emailAddress << " - No spaces allowed." << endl;
		}
		else if (emailAddress.find('@') == string::npos)
		{
			any = true;
			cout << emailAddress << " - Missing the @." << endl;
		}
		else if (emailAddress.find('.') == string::npos)
		{
			any = true;
			cout << emailAddress << " - Missing the 'Period'." << endl;
		}
	}
	if (!any) cout << "No invalid email addresses." << endl;
}

void classRoster::printAverageDaysInCourse(string studentID)
{
	for (int i = 0; i <= classRoster::lastIndex; i++)
	{
		if (classRosterArray[i]->getID() == studentID)
		{
			cout << "Student ID: " << studentID << " averages ";
			cout << (classRosterArray[i]->getNumDays()[0]
				+ classRosterArray[i]->getNumDays()[1]
				+ classRosterArray[i]->getNumDays()[2]) / 3;
			cout << " days per class.";
		}
	}
	cout << endl;
}

void classRoster::removeStuByID(string studentID)
{
	bool success = false;
	for (int i = 0; i <= classRoster::lastIndex; i++)
	{
		if (classRosterArray[i]->getID() == studentID)
		{
			success = true;
			if (i < numStu - 1)
			{
				Student* temp = classRosterArray[i];
				classRosterArray[i] = classRosterArray[numStu - 1];
				classRosterArray[numStu - 1] = temp;
			}
			classRoster::lastIndex--;
		}
	}
	if (success)
	{
		cout << studentID << " was removed from roster." << endl;
		cout << endl;
		cout << "Updated student list." << endl;
		this->printAll();
	}
	else cout << studentID << " not found." << endl << endl;
}

classRoster::~classRoster()
{
	cout << "Removing Student objects." << endl << endl;
	for (int i = 0; i < numStu; i++)
	{
		cout << "Removing Student #" << i + 1 << endl;
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}
}