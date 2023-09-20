/**
 * @file    parity.cpp
 * @date    2023-09-20
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   Write a program that asks the user to input an integer, and tells 
 *          the user whether the number is even or odd. Write a function called 
 *          isEven() that returns true if an integer passed to it is even, and 
 *          false otherwise. Use the remainder operator to test whether the 
 *          integer parameter is even. Make sure isEven() works with both 
 *          positive and negative numbers.
 * 
 *          Your program should match the following output:
 * 
 *              Enter an integer: 5
 *              5 is odd
 * 
 * @version 0.3.2
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
    return n % 2 == 0;
}

