#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("whats your name? \n");
    printf("hello, %s\n", name);
}

// Types, format codes, operators

// There are many data types we can use for our variables,
// which indicate to our program what type of data they represent:

// bool, a Boolean expression of either true or false
// char, a single character like a or 2
// double, a floating-point value with more digits than a float
// float, a floating-point value, or real number with a decimal value
// int, integers up to a certain size, or number of bits
// long, integers with more bits, so they can count higher than an int
// string, a string of characters

//

// For printf, too, there are different placeholders for each type, called format codes:
// %c for chars
// %f for floats or doubles
// %i for ints
// %li for long integers
// %s for strings

//

// And the CS50 Library has corresponding functions to get input of various types:
// get_char
// get_double
// get_float
// get_int
// get_long
// get_string



// There are several mathematical operators we can use, too:
// + for addition
// - for subtraction
// * for multiplication
// / for division
// % for remainder
// Variables, syntactic suga