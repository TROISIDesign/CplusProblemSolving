#include <iostream>
using std::cin;
using std::cout;

/* Problem: using only cout << "#", and cout << "\n", make an upside down right triangle like this:
#####
####
###
##
#
*/

// Recongnize the constraints. We can only use two outputs. Otherwise this would be easy.

// Start small by just using a for loop to make a row of 5 hashtags:

int partOne()
{
    for (int hashNumber = 1; hashNumber <= 5; hashNumber++) // this is for, int calls variable 'hashNumber' at one; stops at 5; increased by 1 each loop
    {
        cout << "#";
    }
    cout << "\n";
    return 0;
} // This outputs one line of '#####`

// The next step is to use another loop to make 5 ROWS of 5 hashtags, and we'll do this by putting our first loop INSIDE of a new loop, like so:

int partTwo()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int hashNumber = 1; hashNumber <= 5; hashNumber++)
        {
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}

/* This outputs a block of hashtags 5 x 5.
 #####
 #####
 #####
 #####
 #####

 So we're getting close. */

/* Looking at what we're writing and the results we're getting, the ROWS are fine, but the "hashNumber" variable that keeps giving 5 hashtags would be better off as
an EXPRESSION that would count down from 5 to 1. We have to figure out an expression that is 5 when row = 1, 4 when row = 2, etc. So an expression that decreases
as row increases. After some math, we realize that the INNER EXPRESSION with hashNumber should be "hashNumber <= 6 - row" instead of previously 'hashNumber <= 5'
This is because the value of 6-(row 1) = 5, 6-2 = 4, 6-3 = 3, 6-4 = 2 and 6-5 = 1. Beautiful.
We'll now try that in the modified "partTwo2()" function:  */

int partTwo2()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int hashNumber = 1; hashNumber <= 6 - row; hashNumber++)
        {
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}

// You can only have ONE main() function in a program, but you can combine other things inside of main like so:

int main()
{
    partOne();
    partTwo();
    partTwo2();
    return 0;
}