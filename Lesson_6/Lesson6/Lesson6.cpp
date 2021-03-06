// Lesson6.cpp : Defines the entry point for the console application.
// Relational Operators

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char cEndLine = '\n';
	double x = 5;
	double y = 10;

	cout << "Given x is equal to 5" << endl;
	cout << "C++ will evaluate to true (1) or false (0)" << cEndLine << endl;

	cout << "is x bigger than 1?  " << (x > 1) << cEndLine << endl;
	cout << "is x smaller than 1?  " << (x < 1) << cEndLine << endl;
	cout << "is x bigger than or equal to 1?  " << (x >= 1) << cEndLine << endl;
	cout << "is x smaller than or equal to 1?  " << (x <= 1) << cEndLine << endl;
	cout << "is x equal to 1?  " << (x == 1) << cEndLine << endl;
	cout << "is x not equal to 1?  " << (x != 1) << cEndLine << endl;

	cout << "We can combine Relational and Logical Operators" << endl;
	cout << "is x bigger than 1 and y buuger than 1?  " << ((x > 1) && (y > 1)) << cEndLine << endl;
	cout << "is x bigger than 1 and y smaller than 1?  " << ((x > 1) && (y < 1)) << cEndLine << endl;
	cout << "is x bigger than 1 or y buuger than 1?  " << ((x > 1) || (y > 1)) << cEndLine << endl;
	cout << "is x bigger than 1 or y smaller than 1?  " << ((x > 1) || (y < 1)) << cEndLine << endl;
    return 0;
}

