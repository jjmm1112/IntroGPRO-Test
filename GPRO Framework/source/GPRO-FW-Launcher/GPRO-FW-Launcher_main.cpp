// GPRO-FW-Launcher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int foo(int bar);

int main()
{
	int test = foo(9000);

	cout << test;

	//printf("\n %d \n", test); usless if using c++

	system("pause");
}
