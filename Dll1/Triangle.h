#pragma once
#ifdef DLL1_EXPORTS
#define DLL1_API __declspec(dllexport)
#else
#define DLL1_API __declspec(dllimport)
#endif
#include <iostream>
using namespace std;

class DLL1_API Triangle
{
	void set_sides();
	double Tperim();
	double Tarea();
	double acangle();
	double abangle();
	double bcangle();
	double a,
		b,
		c,
		perim,
		area,
		ac,
		ab,
		bc;

public:
	void about_triangle();
};

