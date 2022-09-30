#include "pch.h"
#include "framework.h"
#include "Trapezoid.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

using namespace std;

double Trapezoid::Set_left_side() {
	cout << "Enter left side:   ";
	cin >> left_side;
	return left_side;
}

double Trapezoid::Set_right_side() {
	cout << "Enter right side:   ";
	cin >> right_side;
	return right_side;

}

double Trapezoid::Set_top_side() {
	cout << "Enter top side:   ";
	cin >> top_side;
	return top_side;
}

double Trapezoid::Set_bottom_side() {
	cout << "Enter bottom side:   ";
	cin >> bottom_side;
	return bottom_side;
}



double Trapezoid::Get_hight() {
	hight = (sqrt(pow(left_side, 2) - (pow((((pow((bottom_side - top_side), 2)) +
		(pow(left_side, 2) - (pow(right_side, 2)))) / (2 * (bottom_side - top_side))), 2))));
	return hight;
}

double Trapezoid::Get_angle_bottom_left() {
	return (asin(hight / left_side) * 180 / M_PI);
}
double Trapezoid::Get_angle_bottom_right() {
	return (asin(hight / right_side) * 180 / M_PI);
}
double Trapezoid::Get_angle_top_left() {
	return (180 - Get_angle_bottom_left());
}
double Trapezoid::Get_angle_top_right() {
	return 180 - Get_angle_bottom_right();
}

double Trapezoid::Get_perimetr() {
	perim = (left_side + right_side + top_side + bottom_side);
	return perim;
}

double Trapezoid::Get_area() {
	area = (hight * (top_side + bottom_side) * 0.5);
	return area;
}
void Trapezoid::about_Trapezoid()
{
	Set_left_side();
	Set_bottom_side();
	Set_top_side();
	Set_right_side();
	Get_hight();
	Get_perimetr();
	Get_area();
	cout << "   Perimetr:  " << Get_perimetr() << "   Area: " << Get_area() << "   Height: " << hight << "   Left bottom angle: " << Get_angle_bottom_left() << "   Right bottom angle: " << Get_angle_bottom_right() << "   Left top angle: " << Get_angle_top_left() << "   Right top angle: " << Get_angle_top_right();
}