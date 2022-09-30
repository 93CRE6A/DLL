#pragma once
#ifdef DLL1_EXPORTS
#define DLL1_API __declspec(dllexport)
#else
#define DLL1_API __declspec(dllimport)
#endif
#include <iostream>
using namespace std;

class DLL1_API Rectangle {
private:
	double width;
	double height;
	double perim;
	double area;


	double Get_width();
	double Get_height();
	double Get_perimeter();
	double Get_area();
public:
	void about_Rectangle();
};
