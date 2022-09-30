#pragma once
#ifdef DLL1_EXPORTS
#define DLL1_API __declspec(dllexport)
#else
#define DLL1_API __declspec(dllimport)
#endif
#include <iostream>
using namespace std;

class DLL1_API Trapezoid {
public:
	void about_Trapezoid();
private:
	double left_side;
	double	right_side,
		top_side,
		bottom_side,
		perim,
		area,
	hight,
	angle_bottom_right,
	angle_top_right,
	angle_top_left,
	angle_bottom_left;

	double Get_hight();
	double Set_left_side();
	double Set_right_side();
	double Set_top_side();
	double Set_bottom_side();
	double Get_perimetr();
	double Get_area();
	double Get_angle_bottom_right();
	double Get_angle_top_right();
	double Get_angle_top_left();
	double Get_angle_bottom_left();
};


