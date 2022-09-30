#include "pch.h"
#include "framework.h"
#include "Triangle.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

void Triangle::set_sides()
{
	cout << "Ender A, B, C :    ";
	cin >> a >> b >> c;
}

double Triangle::Tperim()
{
	perim = a + b + c;
	return perim;
}

double Triangle::Tarea()
{
	double p = perim / 2;
	area = sqrt(p * (p - a) * (p - b) * (p - c));
	return area;
}

double Triangle::acangle()
{
	ac = acos((a * a + c * c - b * b) / (2 * a * c)) * 180.0 / M_PI;
	return ac;
}

double Triangle::abangle()
{
	ab = acos((a * a - c * c + b * b) / (2 * a * b)) * 180.0 / M_PI;
	return ab;
}

double Triangle::bcangle()
{
	bc = acos((-a * a + c * c + b * b) / (2 * b * c)) * 180.0 / M_PI;
	return bc;
}

void Triangle::about_triangle()
{
	set_sides();
	Tperim();
	Tarea();
	acangle();
	abangle();
	bcangle();
	cout <<"Perimetr: " << perim << "    Area: " << area << "    AC angle: " << ac << "    AB angle: " << ab << "    BC angle: " << bc << endl;

}
