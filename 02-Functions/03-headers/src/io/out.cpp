/**
 * @file    out.cpp
 * @date    2023-09-15
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   Separate file to handle output for main.cpp
 * @version 0.1.0
 */

#include <iostream>

/**
 * @brief   Print "Sum of entered numbers: <x>" to std::out
 * 
 * @param   x value to include in output     
 */
void writeAnswer(int x)
{
    std::cout << "Sum of entered numbers: " << x << "\n";
}