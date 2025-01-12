// print out an array of size five
#include <stdio.h>

int main()
{
    // Declaring the erray
    int number[5];

    // Populate an array
    number[0] = 1;
    number[1] = number[0] * 2;
    number[2] = number[1] * 2;
    number[3] = number[2] * 2;
    number[4] = number[3] * 2;
    number[5] = number[4] * 2;
                                                                

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", number[i]);
    }



    
}