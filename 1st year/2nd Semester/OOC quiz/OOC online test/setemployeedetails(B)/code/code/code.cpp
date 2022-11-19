// code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "employee.h"
#include<cstring>

using namespace std;

int main()
{
    employee e1, e2;

    e1.SetEmployeeDetails(1111, "nimal");
    e1.displaySetEmployeeDetails();
    e1.setOTHours(22);
    e1.setOTRate(100);

    cout << "OT payment =" << e1.calculateOTpayment() << endl;

    e2.SetEmployeeDetails(2222, "sunil");
    e2.displaySetEmployeeDetails();
    e2.setOTHours(18);
    e2.setOTRate(200);

    cout << "OT payment =" << e2.calculateOTpayment()<< endl;




    
}
