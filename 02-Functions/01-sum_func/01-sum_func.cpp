/**
 * @file    01-sum.cpp
 * @date    2023-09-15
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   Write a single-file program (named main.cpp) that reads two separate 
 *          integers from the user, adds them together, and then outputs the 
 *          answer. The program should use three functions:
 *          >   A function named “readNumber” should be used to get (and return) 
 *              a single integer from the user.
 *          >   A function named “writeAnswer” should be used to output the 
 *              answer. This function should take a single parameter and have no 
 *              return value.
 *          >   A main() function should be used to glue the above functions 
 *              together.
 * @version 0.3.1
 */

#include <iostream>

int readNumber();
void writeAnswer(int x);

int main()
{
    int x { readNumber() };
    int y { readNumber() };
    writeAnswer( x + y );
    return 0;
}

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