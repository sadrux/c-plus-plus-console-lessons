// Lesson_11.cpp : Defines the entry point for the console application.
// Global and Local Scope

#include "stdafx.h"
#include <iostream>
using namespace std;

char cGlobal[30] = "I am the cGlobal variable";

int main()
{
	char cLocalToMain[32] = "I am the cLocalToMain variable";
	int iX = 4;

	cout << cGlobal << " This is bad practice and can cause troubles." << endl;
	cout << cLocalToMain << " Local to main(), but global to all participents in main()" << endl;

	while (iX > 0) {
		int iY = 4;
		cout << "iX = " << iX << endl;
		cout << "iY = " << iY << endl;
		--iX;
	}

    return 0;
}

