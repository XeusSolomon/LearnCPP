/**
 * @file    01-sum_difference.cpp
 * @date    2023-09-15
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   Write a program that asks the user to enter a number, and then enter 
 *          a second number. The program should tell the user what the result of 
 *          adding and subtracting the two numbers is.
 *          The output of the program should match the following (assuming 
 *          inputs of 6 and 4):
 * 
 *              Enter an integer: 6
 *              Enter another integer: 4
 *              6 + 4 is 10.
 *              6 - 4 is 2.

 * @version 0.2.0
 */

#include <iostream>

int main()
{
    // first number prompt
    std::cout << "Enter an integer: ";
    int first_num {};
    std::cin >> first_num;

    // second number prompt
    std::cout << "Enter another integer: ";
    int second_num {};
    std::cin >> second_num;

    // results
    int sum { first_num + second_num };
    int dif { first_num - second_num };

    // sum output
    std::cout << first_num << " + " << second_num << " is " << sum << "\n";

    // difference output
    std::cout << first_num << " - " << second_num << " is " << dif << "\n";

    return 0;
}

/*
 * NOTES:
 *  Results variables are not strictly necessary, but help with managing the 
 *  length of lines 38 & 41;
 *  Remember - favor "\n" over std::endl if the purpose is to add a newline to
 *  the console rather than flush the buffer;
 *  For a program this simple, complex variable names are probably overkill, 
 *  just trying to build good habits.
 */