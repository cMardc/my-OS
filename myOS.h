#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <stdio.h>
#include <conio.h>
#include <ctime>
using namespace std;


void printMenu()
{
	cout << "1. Calculator\n";
	cout << "2. Time\n";
	cout << "3. Random Number\n";
	cout << "4. Change Color\n";
}

int check(int selected)
{
	if (selected != 1 && selected != 2 && selected != 3 && selected != 4)
	{
		return -1;
	}
	else
	{
		return selected;
	}
}

void calc()
{
	cout << "\n Enter : ";
	float a, b;
	char symb;
	cin >> a >> symb >> b;
	if (symb != '+' and symb != '-' and symb != 'x' and symb != '*' and symb != '/' and symb != ':')
	{
		cout << "\nGiven Symbol Is Not True\n Enter Again : \n";
		calc();
	}
	else
	{
		if (symb == '+')
		{
			cout << fixed << setprecision(8) << a + b;
		}
		else if (symb == '-')
		{
			cout << fixed << setprecision(8) << a - b;
		}
		else if (symb == 'x' or symb == '*')
		{
			cout << fixed << setprecision(8) << a * b;
		}
		else
		{
			cout << fixed << setprecision(8) << a / b;
		}
	}
}

int random()
{
	int first, second;
	cout << "Enter Two Numbers To Select Random Between : ";
	cin >> first >> second;
	int a, b;
	if (first > second)
	{
		a = second;
		b = first;
		first = a;
		second = b;
	}
	int result;
	do
	{
		result = rand();
	} while (result < first or result > second);
	return result;
}

string noSpace(string input)
{
	size_t size = input.size();
	char symbol;
	string ans = "";
	for (size_t i = 0; i < size; i++)
	{
		symbol = input[i];
		if (symbol != ' ')
		{
			ans += symbol;
		}
	}
	return ans;
}

void setColor(string color)
{
	HANDLE col;
	col = GetStdHandle(STD_OUTPUT_HANDLE);
	int col_code = 7;
	if (color == "blue")
	{
		col_code = 1;
	}
	else if (color == "green")
	{
		col_code = 2;
	}
	else if (color == "cyan")
	{
		col_code = 3;
	}
	else if (color == "red")
	{
		col_code = 4;
	}
	else if (color == "purple")
	{
		col_code = 5;
	}
	else if (color == "darkYellow")
	{
		col_code = 6;
	}
	else if (color == "white")
	{
		col_code = 7;
	}
	else if (color == "grey")
	{
		col_code = 8;
	}
	else if (color == "brightBlue")
	{
		col_code = 9;
	}
	else if (color == "brightGreen")
	{
		col_code = 10;
	}
	else if (color == "brightCyan")
	{
		col_code = 11;
	}
	else if (color == "brightRed")
	{
		col_code = 12;
	}
	else if (color == "pink")
	{
		col_code = 13;
	}
	else if (color == "yellow")
	{
		col_code = 14;
	}
	else if (color == "brightWhite")
	{
		col_code = 15;
	}
	else
	{
		col_code = 7;
	}
	SetConsoleTextAttribute(col, col_code);
}