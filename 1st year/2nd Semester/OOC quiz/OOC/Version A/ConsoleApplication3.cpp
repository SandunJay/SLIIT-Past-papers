#include<iostream>
#include"Student.h"
using namespace std;
int main()
{
	Student* student[4];

	student[0] = new Student("1234", "Kamal", 85, 80, 75);
	student[1] = new Student("4567", "Saman", 65, 50, 45);
	student[2] = new Student("7891", "Nimal", 98, 75, 80);
	student[3] = new Student("1212", "Sunil", 35, 60, 40);

	cout << "Avarage OOC Marks   :" 
		<< (student[0]->getMarksOOC() + student[1]->getMarksOOC() + student[2]->getMarksOOC() + student[3]->getMarksOOC() )/3.0
		<< endl;

	cout << "Avarage SPM Marks   :"
		<< (student[0]->getMarksSPM() + student[1]->getMarksSPM() + student[2]->getMarksSPM() + student[3]->getMarksSPM())/3.0
		<< endl;

	cout << "Avarage OOC Marks   :"
		<< (student[0]->getMarksISDM() + student[1]->getMarksISDM() + student[2]->getMarksISDM() + student[3]->getMarksISDM())/3.0
		<< endl;

	int i = 0;
	for (i = 0; i < 4; i++)
	{
		delete student[i];
	}

	return 0;
}