#include<iostream>
#include "employee.h"
#include<cstring>

using namespace std;


void employee::SetEmployeeDetails(int pempID, char pempName[])
{
	employeeID = pempID;
	strcpy_s(employeeName, pempName);
}

void employee::displaySetEmployeeDetails()
{
	cout << "employeeID = " << employeeID << endl;
	cout << "employeeName = " << employeeName<< endl;
}

void employee::setOTHours(int pOThourse)
{
	OTHourse = pOThourse;
}
void employee::setOTRate(int pOTrate)
{
	OTRate = pOTrate;
}

float employee::calculateOTpayment()
{
	float pay;
	pay = OTHourse * OTRate;
	return pay;
}


