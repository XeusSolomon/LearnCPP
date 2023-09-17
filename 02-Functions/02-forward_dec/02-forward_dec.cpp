/**
 * @file    02-sum.cpp
 * @date    2023-09-15
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   Modify the program you wrote in exercise #1 so that readNumber() and 
 *          writeAnswer() live in a separate file called “io.cpp”. Use a 
 *          forward declaration to access them from main().
 * @version 0.1.3
 */

// #include "io.cpp"

int readNumber();
void writeAnswer(int x);

int main()
{
    int x { readNumber() };
    int y { readNumber() };
    writeAnswer( x + y );
    return 0;
}

/*
 * NOTES:
 *  Already using forward declaration in 01-sum.cpp;
 *  #Include "io.cpp" is redundant;
 *  must invoke g++ using both *.cpp files.
 */