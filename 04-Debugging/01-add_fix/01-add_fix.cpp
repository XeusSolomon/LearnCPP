/**
 * @file    01-add_fix.cpp
 * @date    2023-09-17
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   The following program is supposed to add two numbers, but doesn’t 
 *          work correctly.
 *          Use the integrated debugger to step through this program and watch 
 *          the value of x. Based on the information you learn, fix the program.
 * @version 0.1.2
 */

#include <iostream>

int readNumber(int x)
{
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x {};
	x = readNumber(x);			//# 2) first read number was never assigned
	x = x + readNumber(x);      //# 1) inspection guess - doubles second input
	writeAnswer(x);


	return 0;
}

/*
 * NOTES:
 *  src https://www.learncpp.com/cpp-tutorial/chapter-3-summary-and-quiz/
 *  Inspection guess wrong - ouput is second input only;
 * 	Always obvious when you see it;
 * 	Given solution `int x { readNumber(x) }`;
 */