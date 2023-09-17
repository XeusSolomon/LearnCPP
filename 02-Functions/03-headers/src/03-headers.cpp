/**
 * @file    03-headers.cpp
 * @date    2023-09-15
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   Modify the program you wrote in #2 so that it uses a header file 
 *          (named io.h) to access the functions instead of using forward 
 *          declarations directly in your code (.cpp) files. Make sure your 
 *          header file uses header guards.
 * @version 0.1.3
 */

#include "../include/headers.h"

int main()
{
    int x { readNumber() };
    int y { readNumber() };
    writeAnswer( x + y );
    return 0;
}

/*
 * NOTES:
 *  Went a bit "over and above" or got completely side-tracked:
 *  >   Two separate *.cpp files instead of one
 *  >   Three header files instead of one
 *  >   New project structure
 *  >   Makefile to manage everything
 */