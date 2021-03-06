// Lesson10.cpp : Defines the entry point for the console application.
// 1 Dimensional Arrays

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int iaArray[4];
	iaArray[0] = 1;
	iaArray[1] = -3;
	iaArray[2] = 7;
	iaArray[3] = 2;

	cout << "Index 0 = " << iaArray[0] << endl;
	cout << "Index 1 = " << iaArray[1] << endl;
	cout << "Index 2 = " << iaArray[2] << endl;
	cout << "Index 3 = " << iaArray[3] << endl;

	cout << "-=-=-=-=-=-=-=" << endl;
	cout << "Initilize array with {}: " << endl; // no need to define array size

	int iArray[] = { 3, -5, 6, 0 };
	cout << iArray[0] << endl;
	cout << iArray[1] << endl;
	cout << iArray[2] << endl;
	cout << iArray[3] << endl;

	cout << "Copy an array " << endl;

	int iaCopy[4];
	int iIndex = 0;
	while (iIndex < 4) {
		iaCopy[iIndex] = iaArray[iIndex];
		iIndex++;
	}

	cout << "iaCopy 0 = " << iaCopy[0] << endl;
	cout << "iaCopy 1 = " << iaCopy[1] << endl;
	cout << "iaCopy 2 = " << iaCopy[2] << endl;
	cout << "iaCopy 3 = " << iaCopy[3] << endl;

	cout << "char array" << endl;
	cout << "-=-=-=-=-=-=-=" << endl;

	char caName[20]; // can be initiate with size
	char caLastName[] = "Satat"; // can initiate as a string
	cout << "What is your name? " << endl;
	cin >> caName;
	cout << "It's nice to meet you " << caName << " " << caLastName << endl;

    return 0;
}

