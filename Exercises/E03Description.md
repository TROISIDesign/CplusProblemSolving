## Problem: 
## Luhn Checksum Validation

The **Luhn formula** is a widely used system for validating identification numbers. Using the original number,
double the value of every other digit. Then add the values of the individual digits together (if a doubled
value now has two digits, add the digits individually). The identification number is valid if the sum is
divisible by 10.

Write a program that takes an identification number of arbitrary length and determines whether the number
is valid under the Luhn formula. The program must process each character before reading the next one. */


More detail: The process sounds a little complicated, but an example will make everything
clearer. Our program will only validate an identification number, not create the
check digit. Let’s walk through both ends of the process: computing a check digit
and validating the result. This process is demonstrated in Figure 2-3. In part (a),
we compute the check digit. The original identification number, 176248, is shown
in the dashed-line box. Every other digit, starting from the rightmost digit of the
original number (which, after the addition of the check digit, will be the second
rightmost), is doubled. 

Then each digit is added together. Note that when doubling
a digit results in a two-digit number, each of those digits is considered separately.
For example, when 7 is doubled to produce 14, it’s not 14 that is added to the
checksum, but 1 and 4 individually. In this case, the checksum is 27, so the check
digit is 3 because that’s the digit value that would make the overall sum 30.
Remember, the checksum of the final number should be divisible by 10; in other
words, it should end in 0 