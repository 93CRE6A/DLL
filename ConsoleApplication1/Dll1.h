﻿// Приведенный ниже блок ifdef — это стандартный метод создания макросов, упрощающий процедуру
// экспорта из библиотек DLL. Все файлы данной DLL скомпилированы с использованием символа DLL1_EXPORTS
// Символ, определенный в командной строке. Этот символ не должен быть определен в каком-либо проекте,
// использующем данную DLL. Благодаря этому любой другой проект, исходные файлы которого включают данный файл, видит
// функции DLL1_API как импортированные из DLL, тогда как данная DLL видит символы,
// определяемые данным макросом, как экспортированные.
#pragma once
#ifdef DLL1_EXPORTS
#define DLL1_API __declspec(dllexport)
#else
#define DLL1_API __declspec(dllimport)
#endif
#include <iostream>
using namespace std;

// Этот класс экспортирован из библиотеки DLL
class DLL1_API HelloWorld {
public:
	void SayIt();
	// TODO: добавьте сюда свои методы.
};

extern DLL1_API int nDll1;
//DLL1_API int fnDll1(void);
