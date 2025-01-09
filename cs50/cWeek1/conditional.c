// checks for the conditions
#include <stdio.h>

int main() {
    int number, numbertwo;                     // declare a integer variable

    printf("give me ur 1st number: ");         // a prompt message to the user
    scanf("%d", &number);                      // scanf is a function that gets a variable and store a value to it
    
    printf("You entered: %d\n", number);       // a message to the user

    printf("give me your number 2: ");         // a prompt message asking for the second number
    scanf("%d", &numbertwo);                   // this "&" is called the adress of operator

    printf("You entered: %d\n", numbertwo);    // a message to the user

    if (number < numbertwo)     // checks for a condition
    { // {} defines the inside of an if block
        printf(" number is less than number two %i < %i ", number, numbertwo);
    }
    else if (number > numbertwo)
    {
        printf(" number is greater than numbe two (%i > %i)", number, numbertwo);
    }
    else if (number = numbertwo)
        printf(" number is equal to number two (%i = %i)", number, numbertwo);

    return 0; // this signals success
}