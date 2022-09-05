#include <iostream>
using std::cin;
using std::cout;

/* Problem: using only cout << "#", and cout << "\n", make another triangle that looks like this:

#
##
###
####
###
##`
#

*/

/* We don't need to repeat what we did in lesson 1, but we can apply the same principles.
We can
    - Display a row of hashtags of a certain length using a loop
    - Display a series of rows using nested loops
    - Create a varying number of hashtags in each row using an algebraic expression instead of fixed values
    - Figure out the correct expression through analysis and experimentation.

Remember the first thing we created was one row of 5 hastags, using a single for loop:

 */

// int main()
// {
//     for (int hashNumber = 1; hashNumber <= 5; hashNumber++)
//     {
//         cout << "#";
//     }
//     cout << "\n";
//     return 0;
// }

// Then wrapping that in the additional loop for the rows resulted in:

// int main()
// {
//     for (int row = 1; row <= 7; row++)
//     {
//         for (int hashNumber = 1; hashNumber <= 5 hashNumber++)
//         {
//             cout << "#";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// logic that row 1 should equal to hash 1
// row 2 should equal to 2, 3 to 3, 4 to 4, but 5 to 3, 6 to 2, and 7 to 1
// let's test "hashNumber = 'row" above.
// That fucked everything up. Don't just "test", things, try to solve them logically.
// but even though it fucked up it eventually got it to count up from 1 to 7, so you were halfway there.
// See comment below for explanation of the math*

int main()
{
    for (int row = 1; row <= 7; row++)
    {
        for (int hashNumber = 1; hashNumber <= 4 - abs(4 - row); hashNumber++)
        {
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}

// This provides the pattern we were looking for

/* The math on this is:
Let’s try experimenting this time. In the “Half of a Square” problem, subtracting
the row from a larger number worked well, so let’s see what numbers we get by
running row in a loop from 1 to 7 and subtracting row from 8. The result is shown
in Figure 2-2 (b). That’s not what we want. Where do we go from here? In the
previous problem, we needed a number that went down instead of up, so we
subtracted our loop variable from a greater number. In this problem, we need to go
up first and then down. Would it make sense to subtract from a number in the
middle? If we replace the 8 - row in the previous code with 4 - row, we get the
result in Figure 2-2 (c). That’s not right either, but it looks like it could be a useful
pattern if we don’t look at the minus signs on the last three numbers. What if we
used the absolute value function to remove those minus signs? The expression
abs(4 - row) produces the results in Figure 2-2 (d). We’re so close now—I can
almost taste it! It’s just that we are going down first and then up when we need to
go up first and then down. But how do we get from the number sequence we have
to the number sequence we need?
Let’s try looking at the numbers in Figure 2-2 (d) in a different way. What if we
count the empty spaces instead of the hash marks, as shown in Figure 2-2 (e)?
Column (d) is the right pattern of values if we count the empty spaces. To get the
right number of hash marks, think of each row as having four boxes, and then
subtract the number of empty spaces. If each row has four boxes of which abs(4 -
row) are empty spaces, then the number of boxes with hash marks will be given by
4 - abs(4 - row). That works. Plug it in, and try it out. */
