// Lesson4.cpp : Defines the entry point for the console application.
// Basic Data Types

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "Type char:" << endl;
	cout << "--------------" << endl;
	char cCharacter = 'd';
	cout << "I entered the character " << cCharacter << ", please enter yours" << endl;
	cin >> cCharacter;
	cout << "You changed cCharacter to be " << cCharacter << endl;
	char cEndLine = '\n';
	char cTab = '\t';
	cout << cEndLine << cTab << " line gap created by cEndline, this line starts after a tab thanks to cTab!" << endl;
	cout << cEndLine << endl;
	cout << "Type bool:" << endl;
	cout << "--------------" << endl;
	bool bTrue = true;
	cout << "true is " << bTrue << endl;
	bool bFalse = false;
	cout << "false is " << bFalse << endl;
	
    return 0;

	
}

