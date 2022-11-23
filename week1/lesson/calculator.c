#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // %li long = long integer 64 bits
    // %f float
    int x = get_float("whats x? ");
    int y = get_float("whats y? ");

    printf("%i\n", x / y);
}