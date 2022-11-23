#include <stdio.h>

int main(void)
{
    for (int i = 0; i <4; i++)
    {
        printf("?");
    }
    printf("\n");
}

////////////

#include <stdio.h>

int main(void)
{
    for (int i = 0; i <4; i++)
    {
        printf("#\n");
    }
}

//////////////

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int n = 0; n < 4; n++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

///////////////

#include <stdio.h>

int main(void)
{
    const int n = 7;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

/////////////////777

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("size: ");

    while (n < 1)
    {
        int n = get_int("size: ");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}


////////////////////////////

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("size: ");
    }
    while(n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

//////////////////

#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    //get size of grid
    int n = get_size();

    //print grid of bricks
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("size: ");
    }
    while(n < 1);
    return n;
}

void print_grid(int size)
{
    for(int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

/////////////////////////

#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    //get size of grid
    int n = get_size();

    //print grid of bricks
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("size: ");
    }
    while(n < 1);
    return n;
}

void print_grid(int size)
{
    for(int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

////////////////////

#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int row;
    int column;
    int h;
    do
    {
        h = get_int("height: ");
    }
    while(8 < h || h < 1);

    for (row = 0; row < h; row++)
    {
        for(column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }

}

