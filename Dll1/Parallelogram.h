#pragma once
#ifdef DLL1_EXPORTS
#define DLL1_API __declspec(dllexport)
#else
#define DLL1_API __declspec(dllimport)
#endif
#include <iostream>
using namespace std;

class DLL1_API Parallelogram
{
public:
	void about_Par();
private:
	double Set_sides();
	double Set_base();
	double Set_hight();
	double B_D_angles();
	double A_C_angles();
	double Get_perimetr();
	double Get_area();

	double sides,
		bases,
		hight;

};

