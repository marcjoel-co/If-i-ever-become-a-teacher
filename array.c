#include <stdio.h>

// declare array
int numbers[5];

int main()
{
    // ours starting number
    numbers[0] = 1;

    // for loop for populating the array
    for (int i = 1; i < 5; i++)
    {
        numbers[i] = numbers[i - 1] * 2;
    }    

    // for loop for printing the array in the terminal
    for (int i = 0; i < 5; i ++)
    {
        printf("%i ", numbers[i]);
    }
    // newline character
    printf("\n");
}

// Definition
    //Populating - this is when you add something to an array
    // indexing - this is where you what to add something, the lcoation of a thing inside of an array