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

The program that will solve this problem has several separate issues we will have
to handle. One issue is the doubling of digits, which is tricky because doubled
digits are determined from the right end of the identification number. Remember,
we’re not going to read and store all of the digits and then process. We’re going to
process as we go. The problem is that we’ll be getting the digits left to right, but we
really need them right to left in order to know which digits to double. We would
know which digits to double if we knew how many digits were in the identification
number, but we don’t because the problem states that the identification number is
of arbitrary length. Another issue is that doubled numbers 10 and greater must be
treated according to their individual digits. Also, we have to determine when we’ve
read the whole identification number. Finally, we have to figure out how to read
the number digit by digit. In other words, the user is going to enter one long
number, but we want to read it as though the digits were entered as separate
numbers.
> Because we always want to have a plan, we should make a list of these issues and
tackle them one by one:

- Knowing which digits to double
- Treating doubled numbers 10 and greater according to their individual digits
- Knowing we’ve reached the end of the number
- Reading each digit separately
