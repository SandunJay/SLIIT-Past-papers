#include "Student.h"
#include<cstring>
#include<iostream>
using namespace std;

Student::Student()
{
	strcpy_s(studentID,"");
	strcpy_s(studentName,"");
	marksOOC = 0 ;
	marksSPM = 0;
	marksISDM = 0;
}

Student::Student(const char S_ID[], const char S_name[], float OOC, float SPM, float ISDM)
{
	strcpy_s(studentID, S_ID);
	strcpy_s(studentName, S_name);
	marksOOC = OOC;
	marksSPM = SPM;
	marksISDM = ISDM;
}

void Student::setStudentDetails(const char S_ID[], const char S_name[])
{
	strcpy_s(studentID, S_ID);
	strcpy_s(studentName, S_name);
}

void Student::setMarksOOC(float OOC)
{
	marksOOC = OOC;
}

void Student::setMarksSPM(float SPM)
{
	marksSPM = SPM;
}

void Student::setMarksISDM(float ISDM)
{
	marksISDM = ISDM;
}

float Student::getMarksOOC()
{
	return marksOOC;
}

float Student::getMarksSPM()
{
	return marksSPM;
}

float Student::getMarksISDM()
{
	return marksISDM;
}

Student::~Student()
{
	cout << "Student Removed" << endl;
}