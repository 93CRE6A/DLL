#include "pch.h"
#include "framework.h"
#include "Parallelogram.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
using namespace std;

double Parallelogram::Set_sides()
{
	cout << "Enter sides	";
	cin >> sides;
	return sides;
}

double Parallelogram::Set_base()
{
	cout << "Enter bases	";
	cin >> bases;
	return bases;
}

double Parallelogram::Set_hight()
{
	cout << "Enter hight	";
	cin >> hight;
	return hight;
}

double Parallelogram::A_C_angles()
{
	return (asin(hight / sides) * 180 / M_PI);
}

double Parallelogram::B_D_angles()
{
	return  180 - A_C_angles();
}

double Parallelogram::Get_perimetr()
{
	return (bases + sides) * 2;
}

double Parallelogram::Get_area()
{
	return bases * hight;
}

void Parallelogram::about_Par()
{
	Set_base();
	Set_sides();
	Set_hight();
	cout << "A C angles: " << A_C_angles() << endl;
	cout << "B D angles: " << B_D_angles() << endl;
	cout << "Get perimetr: " << Get_perimetr() << endl;
	cout << "Get area: " << Get_area() << endl;

}