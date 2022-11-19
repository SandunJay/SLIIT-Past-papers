// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
#include<cstring>

using namespace std;

class student
{
    private : 
        int studetID;
        char stuentName[20];
        float marksOOC;
        float marksSPM;
        float marksISDM;
    public : 
        void setStudentDetails(int stdNo , char pstuentName[] , float OOC , float SPM , float ISDM);
        float getstudentID();
        float getmarksOOC();
        float getmarksSPM();
        float getmarksISDM();

};

int main()
{
    student s1, s2, s3;

    s1.setStudentDetails(1234, "vishwa", 75, 80, 60);
    s2.setStudentDetails(1235, "oneli", 73, 50, 30);
    s3.setStudentDetails(1236, "karuu", 75, 20, 90);

    float tot1, tot2, tot3;

    tot1 = s1.getmarksISDM() + s1.getmarksOOC() + s1.getmarksSPM();
    tot2 = s2.getmarksISDM() + s2.getmarksOOC() + s2.getmarksSPM();
    tot3 = s3.getmarksISDM() + s3.getmarksOOC() + s3.getmarksSPM();


    float avg1, avg2, avg3;


    avg1 = tot1 / 3.0;
    avg2 = tot2/ 3.0;
    avg3 = tot3 / 3.0;

    cout << "StudentID = " << s1.getstudentID() << endl;
    cout << "Student Name = " << "vishwa" << endl;
    cout << "Marks OOC = " << s1.getmarksOOC() << endl;
    cout << "Marks SPM = " << s1.getmarksSPM() << endl;
    cout << "Marks ISDM = " << s1.getmarksSPM() << endl;
    cout << "Total Marks = " << tot1 << endl;
    cout << "Average Mark = " << avg1 << endl << endl << endl;


    cout << "StudentID = " << s2.getstudentID() << endl;
    cout << "Student Name = " << "Oneli" << endl;
    cout << "Marks OOC = " << s2.getmarksOOC() << endl;
    cout << "Marks SPM = " << s2.getmarksSPM() << endl;
    cout << "Marks ISDM = " << s2.getmarksSPM() << endl;
    cout << "Total Marks = " << tot2 << endl;
    cout << "Average Mark = " << avg2 << endl << endl << endl;


    cout << "StudentID = " << s3.getstudentID() << endl;
    cout << "Student Name = " << "karuu" << endl;
    cout << "Marks OOC = " << s3.getmarksOOC() << endl;
    cout << "Marks SPM = " << s3.getmarksSPM() << endl;
    cout << "Marks ISDM = " << s3.getmarksSPM() << endl;
    cout << "Total Marks = " << tot3 << endl;
    cout << "Average Mark = " << avg3 << endl << endl << endl;




 
}

void student::setStudentDetails(int stdNo, char pstuentName[], float OOC, float SPM, float ISDM)
{
    studetID = stdNo;
    strcpy_s(stuentName, pstuentName);
    marksOOC = OOC;
    marksSPM = SPM;
    marksISDM = ISDM;
}
float student::getstudentID()
{
    return studetID;
}
float student::getmarksOOC()
{
    return marksOOC;
}
float student::getmarksSPM()
{
    return marksSPM;
}
float student::getmarksISDM()
{
    return marksISDM;
}

