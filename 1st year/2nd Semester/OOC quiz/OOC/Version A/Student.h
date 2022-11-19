#pragma once
class Student
{
private:
	char studentID[20];
	char studentName[20];
	float marksOOC;
	float marksSPM;
	float marksISDM;

public:
	Student();
	Student(const char S_ID[], const char S_name[], float OOC, float SPM, float ISDM);
	void setStudentDetails(const char S_ID[], const char S_name[]);
	void setMarksOOC(float OOC);
	void setMarksSPM(float SPM);
	void setMarksISDM(float ISDM);
	float getMarksOOC();
	float getMarksSPM();
	float getMarksISDM();
	~Student();
}; 


