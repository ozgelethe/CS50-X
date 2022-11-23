#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int row, space, space2, column, h;

    do
    {
        h = get_int("height: ");
    }
    while(8 < h || h < 1);

    for (row = 0; row < h; row++)
    {
        for (space = 0; space < h - row - 1; space++)
        {
            printf(" ");
        }

        for(column = 0; column <= row; column++)
        {
            printf("#");
        }

        printf("  ");

        for(column = 0; column <= row; column++)
        {
            printf("#");
        }

        printf("\n");

    }

}

