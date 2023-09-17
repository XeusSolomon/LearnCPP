/**
 * @file    02-div_fix.cpp
 * @date    2023-09-17
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   The following program is supposed to divide two numbers, but doesn’t 
 *          work correctly.
 *          Use the integrated debugger to step through this program. For 
 *          inputs, enter 8 and 4. Based on the information you learn, fix the 
 *          program.
 * @version 0.1.2
 */

#include <iostream>

int readNumber()
{
	std::cout << "Please enter a number: ";
	int x {};
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The quotient is: " << x << '\n';
}

int main()
{
    /* original */
	// int x{ };
	// int y{ };
	// x = readNumber();       //# 1)  inspection guess - read into
	// x = readNumber();       //# 1)  x twice, divide by 0 error
    /* fix */
    int x { readNumber() };
    int y { readNumber() };
	writeAnswer(x/y);

	return 0;
}

/*
 * NOTES:
 *  src https://www.learncpp.com/cpp-tutorial/chapter-3-summary-and-quiz/
 *  Inspection guess proven correct through compilation, run and debug
 */