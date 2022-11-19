// code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "plane.h"
#include<iostream>
#include<cstring>

using namespace std;


int main()
{
    plane p1, p2, p3, p4;

    p1.setPlaneDetails(1, "john", "USA");
    p2.setPlaneDetails(2, "vvv", "UK");
    p3.setPlaneDetails(3, "jokkkhn", "Lanka");
    p4.setPlaneDetails(4, "jjj", "Japan");

    p1.setPiolet();
    p2.setPiolet();
    p3.setPiolet();
    p4.setPiolet();

    p1.displayPlaneDetails();
    p2.displayPlaneDetails();
    p3.displayPlaneDetails();
    p4.displayPlaneDetails();


    return 0;



}