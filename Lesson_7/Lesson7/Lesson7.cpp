// Lesson7.cpp : Defines the entry point for the console application.
// if, else if, else

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	double x = 2.5;
	double y = 1.5;

	if (y >= x && y >= -x)	{
		cout << " y >= x && y >= -x " << endl;
	} else if (y >= x) {
		cout << " y >= x && y < -x " << endl;
	} else if (y >= -x) {
		cout << " y < x && y >= -x " << endl;
	} else {
		cout << " y < x && y < -x " << endl;
	}
    return 0;
}

