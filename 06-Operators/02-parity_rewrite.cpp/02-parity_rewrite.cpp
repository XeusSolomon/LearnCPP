/**
 * @file    02-parity_rewrite.cpp
 * @date    2023-09-20
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   Rewrite the isEven() function from 01-parity to use the ! operator
 *          instead of the == operator
 * @version 0.1.1
 */

#include <iostream>

int getInt();
bool isEven(int n);
void printParityResult(int n);

int main()
{
    printParityResult(getInt());
    return 0;
}

/**
 * @brief   Gets an integer from the user
 * 
 * @return  int      the integer the user entered
 */
int getInt()
{
    std::cout << "Enter an integer: ";
    int n {};
    std::cin >> n;
    return n;
}

/**
 * @brief   Uses isEven() to test an integer for parity than notifies user by 
 *          printing to console
 * 
 * @attention   Even string format: `<n> is even`
 * @attention   Odd string format: `<n> is odd` 
 * 
 * @param   n        the number to be tested for parity
 */
void printParityResult(int n)
{
    if (isEven(n))
        std::cout << n << " is even\n";
    else
        std::cout << n << " is odd\n";
}

/**
 * @brief   Performs a parity test, returns true if <n> is even
 * 
 * @param   n        integer to be tested for parity
 * @return  true     n is even
 * @return  false    n is odd
 */
bool isEven(int n)
{
    return !(n % 2 != 0);
    // This is to keep function as isEven. Would make more sense to:
    // `return n % 2 != 0` from a function named isOdd()
}

/*
 * NOTES:
 *  Does work and could tell my solution was off [see comments], but did not
 *  get to the given solution: `return !(n % 2);` [because boolean false == 0]
 */