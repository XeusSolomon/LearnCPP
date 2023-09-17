/**
 * @file    io.cpp
 * @date    2023-09-15
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   Separate file to handle i/o for 02-sum.cpp
 * @version 0.1.0
 */

#include <iostream>

/**
 * @brief   Prompt user to enter a number
 * 
 * @return  <int> the number the user entered
 */
int readNumber()
{
    std::cout << "Enter a number: ";
    int x {};
    std::cin >> x;
    return x;
}

/**
 * @brief   Print "Sum of entered numbers: <x>" to std::out
 * 
 * @param   x value to include in output     
 */
void writeAnswer(int x)
{
    std::cout << "Sum of entered numbers: " << x << "\n";
}