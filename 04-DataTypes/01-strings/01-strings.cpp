/**
 * @file    01-strings.cpp
 * @date    2023-09-19
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   Write a program that asks the user to enter their full name and 
 *          their age. As output, tell the user the sum of their age and the 
 *          number of letters in their name (use the std::string::length() 
 *          member function to get the length of the string). For simplicity, 
 *          count any spaces in the name as a letter.
 * 
 *          Sample output:
 * 
 *              Enter your full name: John Doe
 *              Enter your age: 32
 *              Your age + length of name is: 40
 * 
 * @version 0.3.1
 */

#include <iostream>
#include <string>

int getName();
int getAge();
void printResponse(int, int);

int main()
{
    printResponse(getAge(), getName());
    return 0;
}

/**
 * @brief   Gets the number of characters in name entered by user
 * 
 * @return  int     the number of characters in the name the user entered
 */
int getName()
{
    std::cout << "Enter your full name: ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);
    return name.length();
}

/**
 * @brief   Get a value for age from user
 * 
 * @return  int value entered by user
 */
int getAge()
{
    std::cout << "Enter your age: ";
    int age {};
    std::cin >> age;
    return age;
}

/**
 * @brief   Prints response based on user input
 * 
 * @attention   response format: "Your age + length of name is: <age + 
 *              nameLength>""
 * 
 * @param   age         age entered by user
 * @param   nameLength  number of characters in name entered by user 
 */
void printResponse(int age, int nameLength)
{
    std::cout << "Your age + length of name is: " << age + nameLength << '\n';
}