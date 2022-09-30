#pragma once
#ifdef DLL1_EXPORTS
#define DLL1_API __declspec(dllexport)
#else
#define DLL1_API __declspec(dllimport)
#endif
#include <iostream>
using namespace std;

class DLL1_API Circle
{

private:
	double rad,
		perim,
		area;
	double set_rad();
	double Cperim();
	double Carea();

public:
	void about_circle();

};


