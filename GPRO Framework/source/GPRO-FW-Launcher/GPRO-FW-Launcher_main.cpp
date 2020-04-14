// GPRO-FW-Launcher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <GPRO-FW/header.h>
#include <GPRO-FW/game.h>

using namespace std;

int main()
{
	while (true)
	{
		int num;

		cout << "Enter a number (0 to quit): ";

		cin >> num;

		if (num == 0)
		{
			break;
		}

		cout << num << " is " << oddOrEven(num) << endl;
	}

	system("pause");
}
