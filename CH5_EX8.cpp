// CH5_EX8.cpp : Defines the entry point for the console application.
// Tiara Dalton

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	int firstNum;
	int secondNum;
	int remainder;
	int oddNum;
	int oddNum2;
	int evenNum1;
	int evenNum2 = 0;
	int sumNum;
	int digit = 1;
	int square;
	int oddsquare = 0;
	int sumSquare;
	char Alpha = 'A';

	cout << "Enter two numbers." << '\n' << "First number must be less than the second number you enter" << '\n' << "Enter numbers: ";
	cin >> firstNum >> secondNum;
	cout << endl;
	
	while (secondNum <= firstNum)
	{
		cout << "Enter two numbers." << '\n' << "First number must be less than the second number you enter" << '\n' << "Enter numbers: ";
		cin >> firstNum >> secondNum;
		cout << endl;
	}
	
	// calculating if firstNum is even or odd 
	remainder = firstNum%2;

	if (remainder != 0)
		{
			oddNum = firstNum;
			oddNum2 = firstNum;
			evenNum1 = firstNum + 1;
		}
			
	else
		{
			oddNum = firstNum + 1;
			oddNum2 = firstNum + 1;
			evenNum1 = firstNum;
		}

	// calculate odd numbers between firstNum & secondNum
	cout << "Odd integers between " << firstNum << " and " << secondNum << " are: " << endl;
		
	while (oddNum <= secondNum)
		{
			cout << oddNum << " ";
			oddNum = oddNum++;
			oddNum = oddNum++;
			
		}

	cout << endl;

	// calculate sum of even numbers between firstNum & secondNum

	while (evenNum1 <= secondNum)
		{
			sumNum = evenNum1 + evenNum2;
			evenNum2 = sumNum;
			evenNum1 = evenNum1++;
			evenNum1 = evenNum1++;
		}

	cout << "Sum of even integers between " << firstNum << " and " << secondNum << " = " << sumNum << endl;

	// calculate square of the #s 1 - 10 (grid-like)
	cout << "Number" << '\t' << "Square of Number" << endl;

	while (digit < 11)
		{
			square = digit * digit;
			cout << setfill(' ') << setw(4) << digit << '\t' << '\t' << setw(4) << square << endl;
			digit++;
		}
	 
	cout << endl;

	// calculate sum of oddnum squares
	cout << "Sum of the squares of odd integers between " << firstNum << " and " << secondNum << " = ";
	
	while (oddNum2 <= secondNum)
	{
		square = oddNum2 * oddNum2;
		sumNum = square + oddsquare;
		oddsquare = sumNum;
		oddNum2 = oddNum2++;
		oddNum2 = oddNum2++;
		
	}

	cout << sumNum << endl;

	//display Uppercase letters

	cout << "Upper case letters are: ";

	while (Alpha <= 'Z')
	{
		cout << Alpha << " ";
		Alpha = Alpha++;
	}
	
	cout << endl;

	
	
		
	
	
	
	
	system("pause");
	
	return 0;
}

