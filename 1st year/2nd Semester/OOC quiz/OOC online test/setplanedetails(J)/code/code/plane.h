#pragma once
class plane
{
private: 
	int planeID;
	char pilot[20];
	char destination[20];
public : 
	void setPlaneDetails(int pPlainID, char ppilot[], char pdestination[]);
	void displayPlaneDetails();
	char getdestination();
	void setPiolet();

};

