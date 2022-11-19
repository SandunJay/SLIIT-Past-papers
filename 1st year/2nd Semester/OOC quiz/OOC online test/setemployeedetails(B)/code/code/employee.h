#pragma once
class employee
{
	private : 
		int employeeID;
		char employeeName[20];
		int OTHourse;
		int OTRate;
	public : 
		void SetEmployeeDetails(int pempID , char pempName[]);
		void displaySetEmployeeDetails();
		void setOTHours(int pOThourse);
		void setOTRate(int pOTrate);
		float calculateOTpayment();


};

