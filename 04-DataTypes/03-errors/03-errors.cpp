/**
 * @file    03-errors.cpp
 * @date    2023-09-18
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   Find 3 issues (affecting 4 lines) in the following code.
 * @version 0.1.0
 */

//! #1) Don't need this anymore
// #include <cstdint> // for std::uint8_t 
#include <iostream>

int main()
{
    std::cout << "How old are you?\n";

    //! #1) should be int
    //   std::uint8_t age{};
    int age{};
    std::cin >> age;

    std::cout << "Allowed to drive a car in Texas [";

    //! #3) constexp to replace magic num
    // if (age >= 16)
    constexpr int LIMIT {16};
    if (age >= LIMIT)
    //! #2) char nor string
    // std::cout << "x";
    std::cout << 'x';
    else
    //! #2) char nor string
    // std::cout << " ";
    std::cout << ' ';

    std::cout << "]\n";

    return 0;
}

/*
 * NOTES;
 *  src https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/
 *  Didn't do well at all -
 *  >   Identified problem could be solved by changing uint8_t to int but didn't
 *      realise it was because that data type stored input as a char (e.g. char 
 *      '5' has an integer value of 53)
 *  >   Didn't see chars in double quotes on 22 and 24 - too focused on problem
 *  >   Did realise 16 should be a constexp, but got distracted trying to change 
 *      the data type thinking that would solve the problem
 */