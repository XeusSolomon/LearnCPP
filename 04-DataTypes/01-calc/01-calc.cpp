/**
 * @file    01-calc.cpp
 * @date    2023-09-17
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   Write the following program: The user is asked to enter 2 floating 
 *          point numbers (use doubles). The user is then asked to enter one of 
 *          the following mathematical symbols: +, -, *, or /. The program 
 *          computes the answer on the two numbers the user entered and prints 
 *          the results. If the user enters an invalid symbol, the program 
 *          should print nothing.
 *          Example of program:
 * 
 *              Enter a double value: 6.2
 *              Enter a double value: 5
 *              Enter one of the following: +, -, *, or /: *
 *              6.2 * 5 is 31
 * @version 0.4.1
 */

#include <iostream>

double getDouble();
char getOperand();
void performCalculation(double x, double y, char op);
void printResult(double x, double y, char op, double result);


int main()
{
    double x { getDouble() };
    double y { getDouble() };
    char op { getOperand() };
    performCalculation(x, y, op);

    return 0;
}


/**
 * @brief   Get a Double value from the user
 * 
 * @return  double  - value user entered 
 */
double getDouble()
{
    std::cout << "Enter a double value: ";
    double x {};
    std::cin >> x;
    return x;
}

/**
 * @brief   Get a a character that represents an arithmetic operand from the
 *          user (+, -, *, or /).
 * 
 * @return  char    - character user entered
 */
char getOperand()
{
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char c {};
    std::cin >> c;
    return c;
}

/**
 * @brief   Perform calculation based on the user entered operator and call
 *          printResult() to display result. If op is an invalid symbol, does
 *          nothing.
 * 
 * @param   x       first operand 
 * @param   y       second operand
 * @param   op      symbol for operation
 */
void performCalculation(double x, double y, char op)
{
    double result {};
    switch (op)
    {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        result = x / y;
        break;    
    default:
        return;
    }
    printResult(x, y, op, result);
}


/**
 * @brief   print result of calculation to console. Format: 
 *          `<x> <op> <y> is <result>`
 * 
 * @param   x        first operand
 * @param   y        second operand
 * @param   op       operator
 * @param   result   result
 */
void printResult(double x, double y, char op, double result)
{
    std::cout << x << " " << op << " " << y << " is " << result << "\n";
}

/*
 * NOTES:
 *  getDouble() & getOperation() basically the same as solution;
 *  I separated my printResult from the control flow to keep code DRY;
 *  If was briefly introduced in 4.10, switch is not until 8.5 & 8.6, thus 
 *  solution uses if-else-if;
 *  Condition to do nothing makes more sense in above context (if vs switch);
 */