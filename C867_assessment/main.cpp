#include <iostream>
#include <string>
#include <array>
#include "student.h"
#include "roster.h"
#include "degree.h"
using namespace std;

/* JYM1 - Task 1 Class Roster
Scripting and Programming - Applications -- C867
Joshua Rogers
Student ID 001386925
jrog327@wgu.edu
BSIT Data Science / Data Management
Program Mentor: Katherine Cooper
*/

int main()
{

const string studentData[] =

{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Joshua,Rogers,jrog327@wgu.edu,47,15,20,14,SOFTWARE" };

const int numStu = 5;
	
//Top of screen required info
cout << "Class: Scripting and Programming - Applications -- C867" << endl;
cout << "Language: C++ " << endl;
cout << "Student ID: 001386925" << endl;
cout << "Name: Joshua Rogers" << endl;
cout << endl;
//End of top info

classRoster classRoster;

for (int i = 0; i < numStu; i++) classRoster.parse(studentData[i]);
cout << "Displaying all students: " << endl;
classRoster.printAll();
cout << endl;

for (int i = 0; i < 3; i++)
{
	cout << "Displaying students by Degree Program: " << DegreeProgramStrings[i] << endl;
	classRoster.printByDegreeProgram((DegreeProgram)i);
}

cout << "Displaying students with an invalid email address." << endl;
classRoster.printInvalidEmails();
cout << endl;

cout << "Displaying average number of days to complete degree" << endl;
for (int i = 0; i < numStu; i++)
{
	classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getID());
	cout << endl;
}

cout << "Displaying students in Degree Program SOFTWARE" << endl;
classRoster.printByDegreeProgram(SOFTWARE);
cout << endl;

cout << "Removing student A3" << endl;
classRoster.removeStuByID("A3");
cout << endl;

cout << "Displaying updated list of students" << endl;
classRoster.printAll();
cout << endl;

cout << "Checking on removal of student A3." << endl;
classRoster.removeStuByID("A3");
cout << endl;

cout << "Running classRoster destructor." << endl;
classRoster.~classRoster();
cout << endl;

system("pause");

	return 0;
}