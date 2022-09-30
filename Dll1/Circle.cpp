#include "pch.h"
#include "framework.h"
#include "Circle.h"
//#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double Circle::set_rad()
{
	cout << "Enter radius :    ";
	cin >> rad;
	return rad;
}

double Circle::Cperim()
{
	this->perim = 2 * rad * M_PI;
	return perim;
}

double Circle::Carea()
{
	this->area = pow(perim, 2) / (4 * M_PI);
	return area;
}


void Circle::about_circle()
{
	set_rad();
	Cperim();
	Carea();
	cout << "   Radius: " << this->rad << "   Perimetr: " << this->perim << "    Area: " << this->area << endl;
}
