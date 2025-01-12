#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
    //Get user's input
    string  user_input = get_string("What do you wanna redeem my good sir? ");

    //iterate through each element of the string
    for (int i = 0, w = strlen(user_input); i < w; i++)
    {
        if (user_input[i] < user_input[i - 1])
        {
          printf("no");
          return 1;   
        }
        
    }

    printf("YAH");
    return 0;

    

}