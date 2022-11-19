#include<iostream>
#include"Lab.h"
using namespace std;
int main()
{
	
	Lab* lab[3];

	lab[0] = new Lab("401", 60);
	lab[1] = new Lab("402", 40);
	lab[2] = new Lab("403", 30);

	int L_capacity;
	cout << "Enter Capacity    :";
	cin >> L_capacity;


	cout <<endl
		<<endl
		<<"Insert Capasity   :" 
		<< L_capacity 
		<< endl;


	if ( lab[2]->getCapacity()<=L_capacity )
	{
		cout << "Lab          :" << 403 << endl;
	}
	else if(lab[1]->getCapacity() <= L_capacity)
	{
		cout << "Lab          :" << 402 << endl;
	}
	else
	{
		cout << "Lab          :" << 401 << endl;
	}
	return 0;
}