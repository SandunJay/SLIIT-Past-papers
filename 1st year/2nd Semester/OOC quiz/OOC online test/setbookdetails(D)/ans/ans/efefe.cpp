#include <iostream>
#include "efefe.h"
#include <cstring>


using namespace std;

void Student::  setStudentDetails(int sID, char sName[])
{
	studentID = sID;
	strcpy_s(studentName, sName);
}

void Student::setMarksOOC(int mOOC)
{
	marksOOC = mOOC;
}

int Student::getMarksOOC()
{
	return marksOOC;
}

void Student::setMarksSPM(int mSPM)
{
	marksSPM = mSPM;
}

int Student::getMarksSPM()
{
	return marksSPM;
}

void Student::setMarksISDM(int mISDM)
{
	marksISDM = mISDM;
}

int Student::getMarksISDM()
{
	return marksISDM;
}
