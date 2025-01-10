// Averages three numbers using an array, a constant, and a helper function
#include <stdio.h>

// Constant
const int N = 3;

// Prototype
float average(int length, int array[]);

int main(void)
{
    // Get scores
    int scores[N];              // This is an array of integer a chunk of memory that has the size of N
    for (int i = 0; i < N; i++) 
    {
        scanf("%i", &scores[i]); // ask the i'th score for the user
    }

    // Print average
    printf("Average: %f\n", average(N, scores)); //print
}

float average(int length, int array[])
{
    // Calculate average
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}