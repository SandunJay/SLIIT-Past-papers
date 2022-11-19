#include "plane.h"
#include<iostream>
#include<cstring>

using namespace std;

void plane:: setPlaneDetails(int pPlainID, char ppilot[] ,char pdestination[])
{
	planeID = pPlainID;
	strcpy_s(pilot, ppilot);
	strcpy_s(destination, pdestination);

}

void plane::displayPlaneDetails()
{
	cout << "PlaneID = " << planeID << endl;
	cout << "Pilot = " << planeID << endl;
	cout << "Destination = " << getdestination() << endl;

}

char plane::getdestination()
{
	return destination[20];
}
void plane ::setPiolet() 
{
	cout << "Input new piolet of plane " << planeID << ": ";
	cin >> pilot;
}
