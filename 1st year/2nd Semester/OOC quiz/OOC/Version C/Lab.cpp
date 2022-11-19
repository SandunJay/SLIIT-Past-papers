#include"Lab.h"
#include<iostream>
#include<cstring>
using namespace std;
Lab::Lab()
{
	strcpy_s(labID, "");
	Capacity=0;

}

Lab::Lab(const char ID[], int capacity)
{
	strcpy_s(labID, ID);
	Capacity = capacity;
}
void Lab::setDetails(const char ID[], int capacity)
{
	strcpy_s(labID, ID);
	Capacity = capacity;
}

int Lab::getCapacity()
{
	return Capacity;
}
Lab::~Lab()
{
	cout << "" << endl;
}