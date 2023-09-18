/**
 * @file    02-ball.cpp
 * @date    2023-09-18
 * @author  xeus.solomon@gmail.com  https://github.com/XeusSolomon/XeusSolomon
 * @brief   Write a short program to simulate a ball being dropped off of a
 *          tower. To start, the user should be asked for the height of the
 *          tower in meters. Assume normal gravity (9.8 m/s2), and that the ball
 *          has no initial velocity (the ball is not moving to start). Have the
 *          program output the height of the ball above the ground after 0, 1,
 *          2, 3, 4, and 5 seconds. The ball should not go underneath the ground
 *          (height 0).
 *
 *          Use a function to calculate the height of the ball after x seconds.
 *          The function can calculate how far the ball has fallen after x
 *          seconds using the following formula:
 *
 *              distance fallen = gravity_constant * x_seconds^2 / 2
 *
 *          Desired output:
 *
 *              Enter the height of the tower in meters: 100
 *              At 0 seconds, the ball is at height: 100 meters
 *              At 1 seconds, the ball is at height: 95.1 meters
 *              At 2 seconds, the ball is at height: 80.4 meters
 *              At 3 seconds, the ball is at height: 55.9 meters
 *              At 4 seconds, the ball is at height: 21.6 meters
 *              At 5 seconds, the ball is on the ground.
 *
 * @version 0.3.4
 */

/* #region First */

// #include <iostream>

// double getStartingHeight();
// double distFallen(int sec);
// void printCurrentHeight(double staringHeight, int s);

// const double GRAV { 9.8 };

// int main()
// {
//     double startingHeight { getStartingHeight() };
//     printCurrentHeight(startingHeight, 0);
//     printCurrentHeight(startingHeight, 1);
//     printCurrentHeight(startingHeight, 2);
//     printCurrentHeight(startingHeight, 3);
//     printCurrentHeight(startingHeight, 4);
//     printCurrentHeight(startingHeight, 5);
//     return 0;
// }

// /**
//  * @brief   Get the starting height from the user
//  *
//  * @return  double   the the height entered by the user
//  */
// double getStartingHeight()
// {
//     std::cout <<"Enter the height of the tower in meters: ";
//     double m {};
//     std::cin >> m;
//     return m;
// }

// /**
//  * @brief   Calculates distance fallen in earths gravity after specified number
//  *          of seconds
//  *
//  * @param   sec      the number of seconds object has been falling
//  * @return  double   the distance fallen after sec seconds has elapsed
//  */
// double distFallen(int sec)
// {
//     return GRAV * sec * sec / 2.0;
// }

// /**
//  * @brief   Prints current height of object dropped from a height
//  *          <startingHeight> after seconds <s> have elapsed or notifies object
//  *          is on the ground.
//  *
//  * @attention   String formats:
//  * @attention   `At <sec> seconds, the ball is at height: <currentHeight> meters`
//  * @attention   `at <sec> seconds, the ball is on the ground.`
//  *
//  * @param   startingHeight  the height the object started falling from
//  * @param   s               the time in seconds the object has been falling
//  */
// void printCurrentHeight(double startingHeight, int s)
// {
//     double currentHeight = startingHeight - distFallen(s);
//     if (currentHeight > 0)
//         std::cout   << "At " << s << " seconds, the ball is at height: "
//                     << currentHeight << " meters\n";
//     else
//         std::cout   << "At " << s << " seconds, the ball is on the ground.\n";
// }

/* #endregion */

/*
 * NOTES:
 *  Should have used `constexp` for a compile time constant;
 *  As GRAV is only used in one place, would have been preferable to declare
 *  only where it is used;
 *  Consider putting calculations in a single function
 */

/* #region Second */

#include <iostream>

double getStartingHeight();
void calcAndPrintCurrentHeight(int sec, double StartingHeight);
double calcCurrentHeight(int sec, double startingHeight);
void printCurrentHeight(int sec, double currentHeight);

int main()
{
    double startingHeight{getStartingHeight()};
    calcAndPrintCurrentHeight(0, startingHeight);
    calcAndPrintCurrentHeight(1, startingHeight);
    calcAndPrintCurrentHeight(2, startingHeight);
    calcAndPrintCurrentHeight(3, startingHeight);
    calcAndPrintCurrentHeight(4, startingHeight);
    calcAndPrintCurrentHeight(5, startingHeight);
    return 0;
}

/**
 * @brief   Get the starting height from the user
 *
 * @return  double   the the height entered by the user
 */
double getStartingHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double m{};
    std::cin >> m;
    return m;
}

/**
 * @brief   Combine the printCurrentHeight() & calcCurrentHeight() functions
 *
 * @param   sec             number of seconds the object has been falling
 * @param   StartingHeight  inital height of object
 */
void calcAndPrintCurrentHeight(int sec, double StartingHeight)
{
    printCurrentHeight(sec, calcCurrentHeight(sec, StartingHeight));
}

/**
 * @brief   Calculates the height above ground after <sec> seconds for an object
 *          falling from an inital height of <startingHeight> in earth's gravity
 *
 * @param   sec             number of seconds object has been falling
 * @param   startingHeight  inital height of object
 * @return  double          current height above ground
 */
double calcCurrentHeight(int sec, double startingHeight)
{
    constexpr double GRAV{9.8};
    return startingHeight - (GRAV * sec * sec / 2.0);
}

/**
 * @brief   Formats <currentHeight> and <s> into a user readable string and
 *          prints to console
 *
 * @attention   String formats:
 * @attention   `At <s> seconds, the ball is at height: <currentHeight> meters`
 * @attention   `at <s> seconds, the ball is on the ground.`
 *
 * @param   sec             the time in seconds the object has been falling
 * @param   currentHeight   the current height of the object
 */
void printCurrentHeight(int sec, double currentHeight)
{
    if (currentHeight > 0)
        std::cout << "At " << sec << " seconds, the ball is at height: "
                  << currentHeight << " meters\n";
    else
        std::cout << "At " << sec << " seconds, the ball is on the ground.\n";
}
/* #endregion */

/*
 * NOTES:
 *  Still could be better -
 *  >   using loop to avoid repetition in main
 *  >   implement a more robust data structure to avoid passing the same time 
 *      variable around - possibly a class or array
 */