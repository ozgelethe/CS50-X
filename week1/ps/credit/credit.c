 #include <cs50.h>
#include <stdio.h>

// 1. Multiply every other digit by 2, starting with the number’s second-to-last digit,
//  and then add those products’ digits together.
// 2. Add the sum to the sum of the digits that weren’t multiplied by 2.
// 3. If the total’s last digit is 0 (or, put more formally,
// if the total modulo 10 is congruent to 0), the number is valid!

long get_credit_number(void);
int size_credit_number(long credit_number);

int main(void)
{
    //get users card number
    long credit_number = get_credit_number();

    //check the size of credif number
    int lenght = size_credit_number(credit_number);

    //check the card number is legit, if it is not output invalid
    

    //check the card type, like Visa, MasterCard or american Express

    //output the card type
}

//get users card number
long get_credit_number(void)
{
    long c_number;
    do
    {
        c_number = get_long("Number: ");
    }
    while (c_number <= 0);
    return c_number;
}

//check the size of credif number
int size_credit_number(long credit_number)
{
    int digits = 1;
    while(credit_number > 10)
    {
        credit_number /= 10; //integer division
        digits++;
    }
    printf("%i\n", digits);
    return digits;
}
