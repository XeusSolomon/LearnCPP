/**
 * @file    03-call_stack.cpp
 * @date    2023-09-17
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   What does the call stack look like in the following program when the 
 *          point of execution is on line 4? Only the function names are needed 
 *          for this exercise, not the line numbers indicating the point of 
 *          return.
 * @version 0.1.0
 */

#include <iostream>

void d()
{ // here
}

void c()
{
}

void b()
{
	c();
	d();
}

void a()
{
	b();
}

int main()
{
	a();

	return 0;
}

/*
 * NOTES:
 *  src https://www.learncpp.com/cpp-tutorial/chapter-3-summary-and-quiz/
 *  call stack -
 *  >   d()
 *  >   b()
 *  >   a()
 *  >   main()
 *  Good reverse illustration of how call stack works
 */